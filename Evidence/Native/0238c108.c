/* IL2CPP: Dino.BusSand.App.UI.UiKit$$FaceKey
System_String_o* Dino_BusSand_App_UI_UiKit__FaceKey (int32_t c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$FaceKey
   System_String_o* Dino_BusSand_App_UI_UiKit__FaceKey (int32_t c, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_UiKit__FaceKey_228c108(int param_1)

{
  undefined8 *puVar1;
  
  if ((bRam0000000004f9c18b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caffe0);
    FUN_02132f7c(PTR_DAT_04cb51d0);
    FUN_02132f7c(PTR_DAT_04cb51d8);
    FUN_02132f7c(PTR_DAT_04cb51e0);
    FUN_02132f7c(PTR_DAT_04cb51e8);
    bRam0000000004f9c18b = 1;
  }
  puVar1 = (undefined8 *)PTR_DAT_04cb51d0;
  if (param_1 - 1U < 4) {
    puVar1 = *(undefined8 **)(&UNK_049bb800 + (ulong)(param_1 - 1U) * 8);
  }
  return *puVar1;
}

