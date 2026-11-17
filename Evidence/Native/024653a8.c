/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$JumpToLevel
void Dino_BusSand_Cheat_CheatManager__JumpToLevel (Dino_BusSand_Cheat_CheatManager_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$JumpToLevel
   void Dino_BusSand_Cheat_CheatManager__JumpToLevel (Dino_BusSand_Cheat_CheatManager_o* __this,
   int32_t level, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_CheatManager__JumpToLevel_23653a8(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uStack_38;
  int iStack_34;
  
  puVar1 = PTR_DAT_04cba530;
                    /* catch() { ... } // from try @ 02465390 with catch @ 024653ac */
                    /* try { // try from 024653b0 to 025653b7 has its CatchHandler @ 024653c0 */
                    /* try { // try from 024653b8 to 025653c3 has its CatchHandler @ 02465034 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024653b0 with catch @ 024653c0
                        */
  if ((bRam0000000004f9c752 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba530);
    bRam0000000004f9c752 = 1;
  }
  puVar2 = PTR_DAT_04cba458;
  uVar6 = *(undefined8 *)puVar1;
  iStack_34 = param_2;
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
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_Cheat_CheatManager__get_Ready_235da4c();
  if ((uVar4 & 1) == 0) {
    Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,*(undefined8 *)PTR_DAT_04cba4b8);
  }
  else {
    fVar8 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    puVar1 = PTR_DAT_04caba50;
    if (*(float *)(param_1 + 0x14c) <= fVar8) {
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      if (lVar5 != 0) {
        uVar7 = *(undefined8 *)(lVar5 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(lVar5 + 0x20) == 0) goto LAB_0245ece4;
          if (*(int *)(*(long *)(lVar5 + 0x20) + 0x20) == 1) {
            return 0;
          }
        }
        if (param_2 < 2) {
          param_2 = 1;
        }
        iStack_34 = param_2;
        fVar8 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
        *(float *)(param_1 + 0x14c) = fVar8 + _UNK_00e20590;
        Dino_BusSand_Cheat_CheatManager__ResetTransientState_2367c74(param_1);
        if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__SetLevel_22735a8(param_2,0);
        Dino_BusSand_App_Meta_Profile__Save_226c548(0);
        *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04cab380 + 0xb8) + 3) = 1;
        Dino_BusSand_App_GameApp__EnterLevel_21644c8(lVar5,2,0);
        lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,6);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined8 *)(lVar5 + 0x20) = uVar6;
            thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20),uVar6);
            if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_04cba520;
              thunk_FUN_02134474((undefined8 *)(lVar5 + 0x28));
              uVar6 = System_Int32__ToString_482d750(&iStack_34,0);
              if (2 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x30) = uVar6;
                thunk_FUN_02134474((undefined8 *)(lVar5 + 0x30),uVar6);
                if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)PTR_DAT_04cba528;
                  thunk_FUN_02134474();
                  iVar3 = iStack_34;
                  if (*(int *)(*(long *)PTR_DAT_04cacb18 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uStack_38 = Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId_229ad40(iVar3,0);
                  uVar6 = System_Int32__ToString_482d750(&uStack_38,0);
                  if (4 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x40) = uVar6;
                    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x40),uVar6);
                    if (5 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)PTR_DAT_04cab2b8;
                      thunk_FUN_02134474();
                      uVar6 = System_String__Concat_46d31f0(lVar5,0);
                      Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar6);
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

