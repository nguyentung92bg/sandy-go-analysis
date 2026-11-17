/* IL2CPP: Dino.BusSand.App.UI.WelcomeBackPanel$$Claim
void Dino_BusSand_App_UI_WelcomeBackPanel__Claim (Dino_BusSand_App_UI_WelcomeBackPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WelcomeBackPanel$$Claim
   void Dino_BusSand_App_UI_WelcomeBackPanel__Claim (Dino_BusSand_App_UI_WelcomeBackPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_WelcomeBackPanel__Claim_232d9e4
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x1;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  
  uVar6 = Dino_BusSand_App_Meta_WelcomeBack__Claim_220ed38(0);
  *(undefined8 *)(param_4 + 0x70) = uVar6;
  thunk_FUN_02134474();
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
  plVar10 = (long *)(param_4 + 0x50);
  lVar11 = *plVar10;
  *plVar10 = 0;
  thunk_FUN_02134474(plVar10,0);
  puVar4 = PTR_DAT_04cb8fd0;
  puVar3 = PTR_DAT_04cad4f8;
  puVar2 = PTR_DAT_04ca9ae8;
  lVar7 = *(long *)(param_4 + 0x68);
  if (lVar7 != 0) {
    iVar9 = 0;
    do {
      iVar1 = *(int *)(lVar7 + 0x18);
      if (iVar1 <= iVar9) {
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear_4851dc8(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
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
                (lVar7,iVar9,*(undefined8 *)puVar4);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Equality_43c6f30(extraout_x1,0,0);
      if ((uVar8 & 1) == 0) {
        if ((*(long *)(param_4 + 0x68) == 0) ||
           (uVar5 = System_Collections_Generic_List_KeyValuePair_int__object____get_Item_3967ddc
                              (*(long *)(param_4 + 0x68),iVar9,*(undefined8 *)puVar4),
           extraout_x1 == 0)) break;
        uVar6 = *(undefined8 *)(extraout_x1 + 0xd8);
        lVar7 = UnityEngine_Component__get_transform_43bcd18(extraout_x1,0);
        if (lVar7 == 0) break;
        uVar12 = UnityEngine_Transform__get_position_43d0e48(lVar7,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_BoosterFly__Fly_217f630
                  (uVar12,param_2,param_3,0x433e0000,uVar5,uVar6,iVar9,0,0);
        lVar7 = UnityEngine_Component__get_gameObject_43bcde8(extraout_x1,0);
        if (lVar7 == 0) break;
        UnityEngine_GameObject__SetActive_43c1408(lVar7,0,0);
      }
      lVar7 = *(long *)(param_4 + 0x68);
      iVar9 = iVar9 + 1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

