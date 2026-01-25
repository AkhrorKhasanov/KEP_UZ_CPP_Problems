from django.db.models import Model, QuerySet


def get_universities(University: Model) -> QuerySet:
    res = University.objects.filter(students_count__gt=10)
    return res