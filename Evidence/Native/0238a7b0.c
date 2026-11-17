/* IL2CPP: Dino.BusSand.App.UI.KitPop$$ReleaseDim
void Dino_BusSand_App_UI_KitPop__ReleaseDim (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPop$$ReleaseDim
   void Dino_BusSand_App_UI_KitPop__ReleaseDim (const MethodInfo* method); */

void Dino_BusSand_App_UI_KitPop__ReleaseDim_228a7b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cb5110;
  if ((bRam0000000004f9c1a9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5110);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c1a9 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar6 = *(long *)puVar1;
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    lVar3 = *(long *)puVar2;
                    /* try { // try from 0238a840 to 0248a9d7 has its CatchHandler @ 0238a840
                       catch() { ... } // from try @ 0238a840 with catch @ 0238a840
                       catch() { ... } // from try @ 0238a9dc with catch @ 0238a840
                       catch() { ... } // from try @ 0238aa28 with catch @ 0238a840
                       catch() { ... } // from try @ 0238aa84 with catch @ 0238a840 */
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar3);
    }
    UnityEngine_Object__Destroy_43c8114(uVar7,0);
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  *puVar5 = 0;
  thunk_FUN_02134474(puVar5,0);
  *(undefined1 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = 0;
  return;
}

