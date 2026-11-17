/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$PackSource
void Dino_BusSand_App_Meta_GameTracking__PackSource (System_String_o* source, System_String_o** placement, System_String_o** trigger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$PackSource
   void Dino_BusSand_App_Meta_GameTracking__PackSource (System_String_o* source, System_String_o**
   placement, System_String_o** trigger, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__PackSource_221773c
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd61 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb2658);
    FUN_02132f7c(PTR_DAT_04caf008);
    FUN_02132f7c(PTR_DAT_04cb2660);
    FUN_02132f7c(PTR_DAT_04cb2640);
    FUN_02132f7c(PTR_DAT_04cae0f0);
    FUN_02132f7c(PTR_DAT_04caee60);
    FUN_02132f7c(PTR_DAT_04cafba8);
    FUN_02132f7c(PTR_DAT_04cb2648);
    FUN_02132f7c(PTR_DAT_04caec90);
    FUN_02132f7c(PTR_DAT_04cb2668);
    FUN_02132f7c(PTR_DAT_04cb0060);
    bRam0000000004f9bd61 = 1;
  }
  puVar3 = PTR_DAT_04caec90;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Meta_GameTracking__get_InGameNow_2217614();
  uVar5 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar3,0);
  puVar3 = PTR_DAT_04cb0060;
  puVar2 = PTR_DAT_04caee60;
  if ((uVar5 & 1) == 0) {
    *param_3 = *(undefined8 *)PTR_DAT_04cae0f0;
    thunk_FUN_02134474(param_3);
    uVar5 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar2,0);
    if ((uVar5 & 1) == 0) {
      uVar5 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04caf008,0);
      uVar6 = *(undefined8 *)PTR_DAT_04cb2660;
      if (((uVar5 & 1) == 0) && ((uVar4 & 1) == 0)) {
        uVar6 = *(undefined8 *)PTR_DAT_04cafba8;
      }
    }
    else {
      puVar1 = (undefined8 *)PTR_DAT_04cb2648;
      if ((uVar4 & 1) == 0) {
        puVar1 = (undefined8 *)PTR_DAT_04cb2640;
      }
      uVar6 = *puVar1;
    }
    *param_2 = uVar6;
  }
  else {
    puVar1 = (undefined8 *)PTR_DAT_04cb2658;
    if ((uVar4 & 1) == 0) {
      puVar1 = (undefined8 *)PTR_DAT_04cb2668;
    }
    *param_2 = *puVar1;
    thunk_FUN_02134474(param_2);
    *param_3 = *(undefined8 *)puVar3;
    param_2 = param_3;
  }
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)param_2 >> 0xc & 0x3f),
                 ((ulong)param_2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

