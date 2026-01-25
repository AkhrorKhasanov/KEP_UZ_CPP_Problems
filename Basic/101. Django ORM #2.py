from django.db.models import Model, QuerySet


def get_universities(University: Model, students_count: int) -> QuerySet:
    res = University.objects.filter(students_count=students_count)
    return res