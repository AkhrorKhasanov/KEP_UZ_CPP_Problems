from django.db.models import Model, QuerySet

def update_universities(University: type[Model]) -> None:
    universities = University.objects.filter(students_count__gt=10)
    for university in universities:
        university.name = "UNIVER"
        university.save()