/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c__DisplayClass21_0$$<HiddenIntro>b__0
void Dino_BusSand_App_UI_LiveOpsHome___c__DisplayClass21_0___HiddenIntro_b__0 (Dino_BusSand_App_UI_LiveOpsHome___c__DisplayClass21_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023738e0) */
/* WARNING: Removing unreachable block (ram,0x023738ec) */
/* WARNING: Removing unreachable block (ram,0x023738f0) */
/* WARNING: Removing unreachable block (ram,0x023738f8) */
/* WARNING: Removing unreachable block (ram,0x0237390c) */
/* WARNING: Removing unreachable block (ram,0x02373918) */
/* WARNING: Removing unreachable block (ram,0x02373920) */
/* WARNING: Removing unreachable block (ram,0x0237392c) */
/* WARNING: Removing unreachable block (ram,0x02373934) */
/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c__DisplayClass21_0$$<HiddenIntro>b__0
   void Dino_BusSand_App_UI_LiveOpsHome___c__DisplayClass21_0___HiddenIntro_b__0
   (Dino_BusSand_App_UI_LiveOpsHome___c__DisplayClass21_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_LiveOpsHome___c__DisplayClass21_0___HiddenIntro_b__0_2324774(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c5d6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c5d6 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c10a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab718,1,0);
    FUN_02132f7c(PTR_DAT_04cad298);
    FUN_02132f7c(PTR_DAT_04cad250);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c10a = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
    uVar4 = System_Collections_Generic_List_object___Contains_3a81f90
                      (lVar3,uVar8,*(undefined8 *)PTR_DAT_04cad298);
    if ((uVar4 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar7 = *(long *)PTR_DAT_04cab718;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *puVar6 = uVar8;
          thunk_FUN_02134474(puVar6,uVar8);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar3,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar2 = PTR_DAT_04cabaf8;
        if ((bRam0000000004f9c0ee & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          bRam0000000004f9c0ee = 1;
        }
        lVar3 = *(long *)puVar2;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar2;
        }
        *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x28) = 1;
        fVar9 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
        *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2c) = fVar9 + 0.5;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

