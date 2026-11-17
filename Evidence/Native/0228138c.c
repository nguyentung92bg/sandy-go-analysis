/* IL2CPP: Dino.BusSand.App.UI.KitOwnerScale$$.ctor
void Dino_BusSand_App_UI_KitOwnerScale___ctor (Dino_BusSand_App_UI_KitOwnerScale_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitOwnerScale$$.ctor
   void Dino_BusSand_App_UI_KitOwnerScale___ctor (Dino_BusSand_App_UI_KitOwnerScale_o* __this, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_KitOwnerScale___ctor_218138c(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (cRam0000000004f9b65e == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65e = '\x01';
  }
  uVar2 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14);
  *(undefined8 *)(param_1 + 0x20) =
       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  return param_1;
}

