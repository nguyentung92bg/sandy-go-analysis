/* IL2CPP: Dino.BusSand.App.UI.RewardStagePanel$$Claim
void Dino_BusSand_App_UI_RewardStagePanel__Claim (Dino_BusSand_App_UI_RewardStagePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RewardStagePanel$$Claim
   void Dino_BusSand_App_UI_RewardStagePanel__Claim (Dino_BusSand_App_UI_RewardStagePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_RewardStagePanel__Claim_232da10
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long extraout_x1;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  
  if ((bRam0000000004f9c634 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4f8);
    FUN_02132f7c(PTR_DAT_04cb8fb0);
    FUN_02132f7c(PTR_DAT_04cb8fb8);
    FUN_02132f7c(PTR_DAT_04cb8fc0);
    FUN_02132f7c(PTR_DAT_04cb8fc8);
    FUN_02132f7c(PTR_DAT_04cb8fd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c634 = 1;
  }
  plVar9 = (long *)(param_4 + 0x50);
  lVar11 = *plVar9;
  *plVar9 = 0;
  thunk_FUN_02134474(plVar9,0);
  puVar4 = PTR_DAT_04cb8fd0;
  puVar3 = PTR_DAT_04cad4f8;
  puVar2 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)(param_4 + 0x68);
  if (lVar6 != 0) {
    iVar8 = 0;
    do {
      iVar1 = *(int *)(lVar6 + 0x18);
      if (iVar1 <= iVar8) {
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear_4851dc8(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
        }
        Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_4,0);
        if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0242dc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar11 + 0x18))
                    (*(undefined4 *)(param_4 + 0x58),*(undefined4 *)(param_4 + 0x5c),
                     *(undefined4 *)(param_4 + 0x60),*(undefined8 *)(lVar11 + 0x40),
                     *(undefined8 *)(lVar11 + 0x28));
          return;
        }
        return;
      }
      System_Collections_Generic_List_KeyValuePair_int__object____get_Item_3967ddc
                (lVar6,iVar8,*(undefined8 *)puVar4);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(extraout_x1,0,0);
      if ((uVar7 & 1) == 0) {
        if ((*(long *)(param_4 + 0x68) == 0) ||
           (uVar5 = System_Collections_Generic_List_KeyValuePair_int__object____get_Item_3967ddc
                              (*(long *)(param_4 + 0x68),iVar8,*(undefined8 *)puVar4),
           extraout_x1 == 0)) break;
        uVar10 = *(undefined8 *)(extraout_x1 + 0xd8);
        lVar6 = UnityEngine_Component__get_transform_43bcd18(extraout_x1,0);
        if (lVar6 == 0) break;
        uVar12 = UnityEngine_Transform__get_position_43d0e48(lVar6,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_BoosterFly__Fly_217f630
                  (uVar12,param_2,param_3,0x433e0000,uVar5,uVar10,iVar8,0,0);
        lVar6 = UnityEngine_Component__get_gameObject_43bcde8(extraout_x1,0);
        if (lVar6 == 0) break;
        UnityEngine_GameObject__SetActive_43c1408(lVar6,0,0);
      }
      lVar6 = *(long *)(param_4 + 0x68);
      iVar8 = iVar8 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

