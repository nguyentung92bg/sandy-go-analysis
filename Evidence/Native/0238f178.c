/* IL2CPP: Dino.BusSand.App.UI.KitPop$$get_DimHeld
bool Dino_BusSand_App_UI_KitPop__get_DimHeld (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPop$$get_DimHeld
   bool Dino_BusSand_App_UI_KitPop__get_DimHeld (const MethodInfo* method); */

bool Dino_BusSand_App_UI_KitPop__get_DimHeld_228f178(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04cb5110;
  if ((bRam0000000004f9c1aa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5110);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c1aa = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
    bVar3 = false;
  }
  else {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    bVar3 = *(char *)(*(long *)(lVar4 + 0xb8) + 0x18) == '\0';
  }
  return bVar3;
}

