/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$AfterClaim
void Dino_BusSand_App_UI_PassportPanel__AfterClaim (Dino_BusSand_App_UI_PassportPanel_o* __this, int32_t i, bool paid, System_Collections_Generic_List_PassportFeature_Reward__o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023a8ee0) */
/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$AfterClaim
   void Dino_BusSand_App_UI_PassportPanel__AfterClaim (Dino_BusSand_App_UI_PassportPanel_o* __this,
   int32_t i, bool paid, System_Collections_Generic_List_PassportFeature_Reward__o* rewards, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__AfterClaim_21d7884
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5,ulong param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined4 uVar13;
  
  puVar1 = PTR_DAT_04cab1e8;
  if ((bRam0000000004f9bb65 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae880);
    FUN_02132f7c(PTR_DAT_04cb0728);
    FUN_02132f7c(PTR_DAT_04cb0738);
                    /* try { // try from 022d7918 to 023d7aa7 has its CatchHandler @ 022d7b10 */
    FUN_02132f7c(PTR_DAT_04cb06d8);
    FUN_02132f7c(PTR_DAT_04cb0838);
    FUN_02132f7c(PTR_DAT_04cb0840);
    FUN_02132f7c(PTR_DAT_04cb0848);
    bRam0000000004f9bb65 = 1;
  }
  puVar2 = PTR_DAT_04cae880;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)puVar2,0);
  if ((*(long *)(param_4 + 0x78) != 0) &&
     (lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                        (*(long *)(param_4 + 0x78),param_5,*(undefined8 *)PTR_DAT_04cad7c8),
     puVar1 = PTR_DAT_04ca9ae8, lVar4 != 0)) {
    puVar8 = (undefined8 *)PTR_DAT_04cb0840;
    if ((param_6 & 1) == 0) {
      puVar8 = (undefined8 *)PTR_DAT_04cb0838;
    }
    lVar4 = UnityEngine_Transform__Find_43d4bec(lVar4,*puVar8,0);
    Dino_BusSand_App_UI_PassportPanel__RefreshStage_21d5994(param_4,param_5);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04caec68;
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if (lVar4 == 0) goto LAB_022d7b4c;
      uVar6 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cb06d8,0);
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar10);
      }
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar6,0,0);
      uVar6 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cb0738,0);
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar6,1,0);
      Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar6,*(undefined8 *)PTR_DAT_04cb0848,0);
      uVar6 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cb0728,0);
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar6,0,0);
    }
                    /* try { // try from 022d7aa8 to 023d7b53 has its CatchHandler @ 022d7620 */
    plVar7 = (long *)Dino_BusSand_App_UI_PassportUi__FlyList_21d8358(param_7);
    lVar10 = *(long *)puVar1;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar10);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
    if ((uVar5 & 1) == 0) {
      lVar4 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
    }
    if (lVar4 != 0) {
      uVar13 = UnityEngine_Transform__get_position_43d0e48(lVar4,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if ((bRam0000000004f9c298 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caf5d8,0,0,0);
        FUN_02132f7c(PTR_DAT_04caf7a0);
        FUN_02132f7c(PTR_DAT_04caca60);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9c298 = 1;
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      lVar4 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
      if ((plVar7 != (long *)0x0) && ((uVar5 & 1) == 0)) {
        lVar10 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04caf5d8) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_023a8e4c;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04caf5d8,0);
LAB_023a8e4c:
        iVar3 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (iVar3 != 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar4,0);
          if ((uVar5 & 1) != 0) {
            uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
            System_Collections_Generic_List_KeyValuePair_int__long_____ctor_39650e8
                      (uVar6,plVar7,*(undefined8 *)PTR_DAT_04caf7a0);
            lVar10 = Dino_BusSand_App_UI_CommerceRewardFly__Run_22a8f20
                               (uVar13,param_2,param_3,lVar4,uVar6,0,0);
            if (lVar10 == 0) {
              thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
              uVar9 = thunk_FUN_0216e89c();
              uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
              System_NullReferenceException___ctor_483267c(uVar9,uVar6,0);
            }
            else {
              uVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
              if ((uVar5 & 1) != 0) {
                if ((bRam0000000004fa84ef & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf7890);
                  bRam0000000004fa84ef = 1;
                }
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar12 = *(long *)(lVar4 + 0x10);
                if (lVar12 != 0) {
                  if (pcRam0000000004fa8560 == (code *)0x0) {
                    pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                  }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa8560)(lVar12,lVar10);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
              }
              thunk_FUN_021985a8(PTR_DAT_04caa3a8);
              uVar9 = thunk_FUN_0216e89c();
              uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
              System_ArgumentException___ctor_47b660c(uVar9,uVar6,0);
            }
            uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar9,uVar6);
          }
        }
      }
      return;
    }
  }
LAB_022d7b4c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

