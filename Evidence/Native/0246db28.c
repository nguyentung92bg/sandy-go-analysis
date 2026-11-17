/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c__DisplayClass14_1$$<OnOpen>b__37
void Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_1___OnOpen_b__37 (Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_1_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c__DisplayClass14_1$$<OnOpen>b__37
   void Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_1___OnOpen_b__37
   (Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_1_o* __this, const MethodInfo* method);
    */

undefined8
Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_1___OnOpen_b__37_236db28(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uStack_38;
  int aiStack_34 [3];
  
  lVar6 = Dino_BusSand_Cheat_CheatMobilePanel__get_C_2368914(0);
  puVar2 = PTR_DAT_04cba530;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if ((bRam0000000004f9c752 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba530,iVar1,0);
    bRam0000000004f9c752 = 1;
  }
  puVar3 = PTR_DAT_04cba458;
  uVar7 = *(undefined8 *)puVar2;
  aiStack_34[0] = iVar1;
  if ((bRam0000000004f9c766 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cacb18);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cba520);
    FUN_02132f7c(PTR_DAT_04cba4b8);
    FUN_02132f7c(PTR_DAT_04cba528);
    FUN_02132f7c(PTR_DAT_04cab2b8);
    bRam0000000004f9c766 = 1;
  }
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_Cheat_CheatManager__get_Ready_235da4c();
  if ((uVar4 & 1) == 0) {
    Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(lVar6,*(undefined8 *)PTR_DAT_04cba4b8);
  }
  else {
    fVar9 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    puVar2 = PTR_DAT_04caba50;
    if (*(float *)(lVar6 + 0x14c) <= fVar9) {
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      if (lVar5 != 0) {
        uVar8 = *(undefined8 *)(lVar5 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(lVar5 + 0x20) == 0) goto LAB_0245ece4;
          if (*(int *)(*(long *)(lVar5 + 0x20) + 0x20) == 1) {
            return 0;
          }
        }
        if (iVar1 < 2) {
          iVar1 = 1;
        }
        aiStack_34[0] = iVar1;
        fVar9 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
        *(float *)(lVar6 + 0x14c) = fVar9 + _UNK_00e20590;
        Dino_BusSand_Cheat_CheatManager__ResetTransientState_2367c74(lVar6);
        if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__SetLevel_22735a8(iVar1,0);
        Dino_BusSand_App_Meta_Profile__Save_226c548(0);
        *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04cab380 + 0xb8) + 3) = 1;
        Dino_BusSand_App_GameApp__EnterLevel_21644c8(lVar5,2,0);
        lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,6);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined8 *)(lVar5 + 0x20) = uVar7;
            thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20),uVar7);
            if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_04cba520;
              thunk_FUN_02134474((undefined8 *)(lVar5 + 0x28));
              uVar7 = System_Int32__ToString_482d750(aiStack_34,0);
              if (2 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x30) = uVar7;
                thunk_FUN_02134474((undefined8 *)(lVar5 + 0x30),uVar7);
                if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)PTR_DAT_04cba528;
                  thunk_FUN_02134474();
                  iVar1 = aiStack_34[0];
                  if (*(int *)(*(long *)PTR_DAT_04cacb18 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uStack_38 = Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId_229ad40(iVar1,0);
                  uVar7 = System_Int32__ToString_482d750(&uStack_38,0);
                  if (4 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x40) = uVar7;
                    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x40),uVar7);
                    if (5 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)PTR_DAT_04cab2b8;
                      thunk_FUN_02134474();
                      uVar7 = System_String__Concat_46d31f0(lVar5,0);
                      Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(lVar6,uVar7);
                      return 1;
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
      }
LAB_0245ece4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
}

