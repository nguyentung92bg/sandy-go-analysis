/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtPeriods$$Hms
int64_t Dino_BusSand_App_Meta_BattleYachtPeriods__Hms (System_String_o* v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtPeriods$$Hms
   int64_t Dino_BusSand_App_Meta_BattleYachtPeriods__Hms (System_String_o* v, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_BattleYachtPeriods__Hms_22274b8(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  int iStack_1c;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  iStack_1c = 0;
  uVar1 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  lVar2 = 0;
  if ((uVar1 & 1) == 0) {
    if (((param_1 == 0) || (lVar2 = System_String__Trim_46d6ee0(param_1,0), lVar2 == 0)) ||
       (lVar2 = System_String__PadLeft_46d41f0(lVar2,6,0x30,0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    uVar3 = System_String__Substring_46d4848(lVar2,0,2,0);
    System_Int32__TryParse_482de64(uVar3,(long)&uStack_18 + 4,0);
    uVar3 = System_String__Substring_46d4848(lVar2,2,2,0);
    System_Int32__TryParse_482de64(uVar3,&uStack_18,0);
    uVar3 = System_String__Substring_46d4848(lVar2,4,2,0);
    System_Int32__TryParse_482de64(uVar3,&iStack_1c,0);
    lVar2 = (long)uStack_18._4_4_ * 0xe10 + (long)(int)uStack_18 * 0x3c + (long)iStack_1c;
  }
  return lVar2;
}

