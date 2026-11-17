/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$get_Pencil
UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__get_Pencil (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$get_Pencil
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__get_Pencil (const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_AtelierArt__get_Pencil_22da5bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_04cb6f70;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3f5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6f70);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3f5 = 1;
  }
  uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    uVar5 = Dino_BusSand_App_UI_AtelierArt__MakePencil_22ddb7c();
    puVar4 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *puVar4 = uVar5;
    thunk_FUN_02134474(puVar4,uVar5);
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  }
  return uVar5;
}

