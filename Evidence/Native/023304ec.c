/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$Ended
bool Dino_BusSand_App_Meta_WeeklyCupModel__Ended (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$Ended
   bool Dino_BusSand_App_Meta_WeeklyCupModel__Ended (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this,
   int64_t nowMs, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_WeeklyCupModel__Ended_22304ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(lVar1 + 0x18) != '\0') {
    return *(long *)(lVar1 + 0x10) + 0x240c8400 <= param_2;
  }
  return false;
}

