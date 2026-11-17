/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$Hms
int32_t Dino_BusSand_App_Meta_StreakTowerUtil__Hms (System_String_o* v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$Hms
   int32_t Dino_BusSand_App_Meta_StreakTowerUtil__Hms (System_String_o* v, const MethodInfo*
   method); */

int Dino_BusSand_App_Meta_StreakTowerUtil__Hms_22519c4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int iStack_1c;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  iStack_1c = 0;
  uVar2 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  iVar1 = 0;
  if ((uVar2 & 1) == 0) {
    if ((param_1 == 0) || (lVar3 = System_String__PadLeft_46d41f0(param_1,6,0x30,0), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    uVar4 = System_String__Substring_46d4848(lVar3,0,2,0);
    System_Int32__TryParse_482de64(uVar4,(long)&uStack_18 + 4,0);
    uVar4 = System_String__Substring_46d4848(lVar3,2,2,0);
    System_Int32__TryParse_482de64(uVar4,&uStack_18,0);
    uVar4 = System_String__Substring_46d4848(lVar3,4,2,0);
    System_Int32__TryParse_482de64(uVar4,&iStack_1c,0);
    iVar1 = uStack_18._4_4_ * 0xe10 + (int)uStack_18 * 0x3c + iStack_1c;
  }
  return iVar1;
}

