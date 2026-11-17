/* IL2CPP: Dino.BusSand.App.UI.UIManager$$IsOpen<object>
bool Dino_BusSand_App_UI_UIManager__IsOpen_object_ (Dino_BusSand_App_UI_UIManager_o* __this, const MethodInfo_2945298* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$IsOpen<object>
   bool Dino_BusSand_App_UI_UIManager__IsOpen_object_ (Dino_BusSand_App_UI_UIManager_o* __this,
   const MethodInfo_2945298* method); */

uint Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    puVar4 = *(undefined8 **)(param_2 + 0x38);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_0216b4cc(param_2);
      puVar4 = *(undefined8 **)(param_2 + 0x38);
    }
  }
  uVar3 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8(param_1,*puVar4);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa8638 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
    bRam0000000004fa8638 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar3,0);
  return (uVar2 ^ 0xffffffff) & 1;
}

