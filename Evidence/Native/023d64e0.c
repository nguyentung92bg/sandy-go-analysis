/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$get_Peg
UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__get_Peg (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$get_Peg
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__get_Peg (const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_AtelierArt__get_Peg_22d64e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_04cb6f70;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3f4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6f70);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3f4 = 1;
  }
  uVar4 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    uVar4 = Dino_BusSand_App_UI_AtelierArt__MakePeg_22dd74c();
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar4;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar4);
  }
  else {
    uVar4 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  }
  return uVar4;
}

