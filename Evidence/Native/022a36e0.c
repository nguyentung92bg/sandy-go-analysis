/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$.ctor
void Dino_BusSand_App_UI_ClimbTowerItemView___ctor (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$.ctor
   void Dino_BusSand_App_UI_ClimbTowerItemView___ctor (Dino_BusSand_App_UI_ClimbTowerItemView_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_ClimbTowerItemView___ctor_21a36e0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cada70;
  puVar1 = PTR_DAT_04cada68;
  if ((bRam0000000004f9ba2a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada70);
    FUN_02132f7c(PTR_DAT_04cada68);
    bRam0000000004f9ba2a = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x90),uVar3);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

