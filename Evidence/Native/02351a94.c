/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$WeekDay
int32_t Dino_BusSand_App_Meta_StreakTowerUtil__WeekDay (System_String_o* v, System_String_o** time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$WeekDay
   int32_t Dino_BusSand_App_Meta_StreakTowerUtil__WeekDay (System_String_o* v, System_String_o**
   time, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_StreakTowerUtil__WeekDay_2251a94(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uStack_24;
  
  puVar1 = PTR_DAT_04cb3c90;
  if ((bRam0000000004f9bfce & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3c90);
    bRam0000000004f9bfce = 1;
  }
  uStack_24 = 0;
  *param_2 = *(long *)puVar1;
  thunk_FUN_02134474(param_2);
  uVar3 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  if ((uVar3 & 1) == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    iVar2 = System_String__IndexOf_46d72c4(param_1,0x2d,0);
    if (iVar2 < 0) {
      *param_2 = param_1;
      thunk_FUN_02134474(param_2,param_1);
    }
    else {
      lVar4 = System_String__Substring_46d6a94(param_1,iVar2 + 1,0);
      *param_2 = lVar4;
      thunk_FUN_02134474(param_2,lVar4);
      uVar5 = System_String__Substring_46d4848(param_1,0,iVar2,0);
      System_Int32__TryParse_482de64(uVar5,&uStack_24,0);
      if (0 < (int)uStack_24) {
        if (7 < uStack_24) {
          return 0;
        }
        return uStack_24;
      }
    }
  }
  return 0;
}

