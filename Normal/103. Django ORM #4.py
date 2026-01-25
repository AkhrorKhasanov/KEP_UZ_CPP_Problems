from django.db.models import Model, QuerySet


def get_universities(University: Model) -> QuerySet:
    res = University.objects.filter(students_count__gt=10, students_count__lt=20, name__startswith='a')
    return res