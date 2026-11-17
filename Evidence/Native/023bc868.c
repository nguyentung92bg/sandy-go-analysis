/* IL2CPP: Dino.BusSand.App.UI.BootArt$$Hex
UnityEngine_Color_o Dino_BusSand_App_UI_BootArt__Hex (System_String_o* rgba, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BootArt$$Hex
   UnityEngine_Color_o Dino_BusSand_App_UI_BootArt__Hex (System_String_o* rgba, const MethodInfo*
   method); */

undefined4 Dino_BusSand_App_UI_BootArt__Hex_22bc868(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cabd78;
  if ((bRam0000000004f9c312 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabd78);
    bRam0000000004f9c312 = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  uVar2 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,param_1,0);
  UnityEngine_ColorUtility__TryParseHtmlString_43aae78(uVar2,&uStack_30,0);
  return (undefined4)uStack_30;
}

