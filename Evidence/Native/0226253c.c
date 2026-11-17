/* IL2CPP: Dino.BusSand.App.TweenRunner$$OnDestroy
void Dino_BusSand_App_TweenRunner__OnDestroy (Dino_BusSand_App_TweenRunner_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.TweenRunner$$OnDestroy
   void Dino_BusSand_App_TweenRunner__OnDestroy (Dino_BusSand_App_TweenRunner_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_TweenRunner__OnDestroy_216253c(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar9 = PTR_DAT_04cac1f0;
  if ((bRam0000000004f9b836 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac2b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1f0);
    bRam0000000004f9b836 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar5 = *(long *)puVar9;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
                    /* try { // try from 022625a0 to 023625eb has its CatchHandler @ 02262504 */
    lVar5 = *(long *)puVar9;
  }
  uVar11 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
                    /* catch() { ... } // from try @ 0226252c with catch @ 022625cc */
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar11,param_1,0);
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)puVar9;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar9;
    }
    **(undefined8 **)(lVar5 + 0xb8) = 0;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar9 + 0xb8),0);
  }
  lVar5 = *(long *)puVar9;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar9;
  }
  lVar5 = *(long *)(lVar5 + 0xb8);
  lVar10 = *(long *)(lVar5 + 8);
  if (lVar10 != 0) {
    iVar1 = *(int *)(lVar10 + 0x18);
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
      lVar5 = *(long *)(*(long *)puVar9 + 0xb8);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (iVar1 < 1) {
        return;
      }
      puVar7 = *(undefined8 **)(lVar5 + 0x10);
      if (puVar7 == (undefined8 *)0x0) {
        thunk_FUN_021985a8(PTR_DAT_04cbe5c8,0,iVar1,0);
        uVar8 = thunk_FUN_0216e89c();
        uVar11 = thunk_FUN_021985a8(PTR_DAT_04cc29c8);
        System_ArgumentNullException___ctor_47afb54(uVar8,uVar11,0);
      }
      else {
        if (iVar1 < 0) {
          thunk_FUN_021985a8(PTR_DAT_04cc27d8,0,iVar1,0);
          uVar8 = thunk_FUN_0216e89c();
          puVar9 = PTR_DAT_04d13dc0;
        }
        else {
          iVar3 = FUN_02143bfc(puVar7,0);
          if (iVar3 < 1) {
            iVar4 = System_Array__get_Length_4848454(puVar7);
            if (-iVar3 <= iVar4 - iVar1) {
              iVar4 = il2cpp_array_element_size(*puVar7);
              (*(code *)PTR_memset_04d166b8)
                        ((long)puVar7 + (long)iVar4 * (long)-iVar3 + 0x20,0,(long)(iVar4 * iVar1));
              return;
            }
            thunk_FUN_021985a8(PTR_DAT_04cc27d8);
            uVar8 = thunk_FUN_0216e89c();
            puVar9 = PTR_DAT_04d13dd0;
          }
          else {
            thunk_FUN_021985a8(PTR_DAT_04cc27d8);
            uVar8 = thunk_FUN_0216e89c();
            puVar9 = PTR_DAT_04d13dc8;
          }
        }
        uVar11 = thunk_FUN_021985a8(puVar9);
        System_IndexOutOfRangeException___ctor_482b694(uVar8,uVar11,0);
      }
      uVar11 = thunk_FUN_021985a8(PTR_DAT_04d13dd8);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar8,uVar11);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

