/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$PlayKeysGain
bool Dino_BusSand_App_UI_PassportUi__PlayKeysGain (int32_t produce, System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$PlayKeysGain
   bool Dino_BusSand_App_UI_PassportUi__PlayKeysGain (int32_t produce, System_Action_o* done, const
   MethodInfo* method); */

ulong Dino_BusSand_App_UI_PassportUi__PlayKeysGain_21dc8dc(undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000004f9bb8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0a30);
    FUN_02132f7c(PTR_DAT_04cb0a48);
    bRam0000000004f9bb8a = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar7 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
  lVar6 = 0;
  if ((uVar2 & 1) != 0) {
    if (lVar7 == 0) goto LAB_022dca90;
    lVar6 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                      (lVar7,*(undefined8 *)PTR_DAT_04cb0a30);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  lVar7 = 0;
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 022dc9d0 to 023dc9d7 has its CatchHandler @ 022dce9c */
    if (lVar6 == 0) goto LAB_022dca90;
    lVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar6,*(undefined8 *)PTR_DAT_04cb0a48,0);
  }
  lVar3 = Dino_BusSand_App_UI_PassportUi__get_F_21daeb0();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  uVar2 = 0;
                    /* try { // try from 022dca28 to 023dca57 has its CatchHandler @ 022dcea0 */
  if (((uVar4 & 1) == 0) && (lVar3 != 0)) {
    if ((lVar7 == 0) ||
       (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), uVar2 = 0, lVar5 == 0)) {
LAB_022dca90:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar2);
    }
    uVar2 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = Dino_BusSand_App_UI_PassportUi__KeysGain_21dca94(lVar7,lVar3,param_1,param_2);
      if (lVar6 == 0) goto LAB_022dca90;
      UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar6,uVar2,0);
      uVar2 = 1;
    }
  }
  return uVar2;
}

