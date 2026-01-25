from django.db.models import Model, QuerySet


def get_universities(University: Model) -> QuerySet:
    universities = University.objects.all()
    return universities