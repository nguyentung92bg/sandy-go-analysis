/* IL2CPP: Dino.BusSand.App.UI.UiKit$$SettingsButton
UnityEngine_UI_Image_o* Dino_BusSand_App_UI_UiKit__SettingsButton (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$SettingsButton
   UnityEngine_UI_Image_o* Dino_BusSand_App_UI_UiKit__SettingsButton (UnityEngine_Transform_o*
   parent, System_String_o* name, const MethodInfo* method); */

long * Dino_BusSand_App_UI_UiKit__SettingsButton_2284b34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c199 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cafd00);
    FUN_02132f7c(PTR_DAT_04cb4ed8);
    FUN_02132f7c(PTR_DAT_04cafd08);
    bRam0000000004f9c199 = 1;
  }
  puVar2 = PTR_DAT_04cafd00;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar3 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                             (0x42f60000,0x42f80000,0,0,0x3f800000,param_1,param_2,
                              *(undefined8 *)puVar2,0);
  puVar2 = PTR_DAT_04cb4ed8;
  puVar1 = PTR_DAT_04cafd08;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x2c8))(plVar3,1,*(undefined8 *)(*plVar3 + 0x2d0));
    uVar4 = UnityEngine_Component__get_transform_43bcd18(plVar3,0);
    plVar5 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                               (0x42ba0000,0x42ba0000,0,0x40900000,0x3f800000,uVar4,
                                *(undefined8 *)puVar1,*(undefined8 *)puVar2,0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x2c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2d0));
                    /* try { // try from 02384c58 to 02484d53 has its CatchHandler @ 02384c58
                       catch() { ... } // from try @ 02384c58 with catch @ 02384c58
                       catch() { ... } // from try @ 023853f0 with catch @ 02384c58
                       catch() { ... } // from try @ 023854ac with catch @ 02384c58
                       catch() { ... } // from try @ 023854d4 with catch @ 02384c58 */
      return plVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

