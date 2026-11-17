/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$GiftPackDueImpl
void Dino_BusSand_App_UI_LiveOpsHome__GiftPackDueImpl (bool* due, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02421d20) */
/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$GiftPackDueImpl
   void Dino_BusSand_App_UI_LiveOpsHome__GiftPackDueImpl (bool* due, const MethodInfo* method); */

void Dino_BusSand_App_UI_LiveOpsHome__GiftPackDueImpl_2321aa4(undefined1 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *plVar8;
  
  if ((bRam0000000004f9c5b2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cb8a80);
    FUN_02132f7c(PTR_DAT_04cb8a88);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    bRam0000000004f9c5b2 = 1;
  }
  lVar4 = Dino_BusSand_App_UI_LiveOpsHome__get_Gifts_2321d74();
  *param_1 = 0;
  uVar5 = Dino_BusSand_App_UI_LiveOpsHome__get_GiftShown_2321dd8();
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (lVar4 != 0) {
    uVar5 = Dino_BusSand_App_Meta_GiftPackFeature__CanShowPopup_223a7f4(lVar4,0x3ec,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    plVar8 = *(long **)(lVar4 + 0x28);
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04cb8a80) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02421b88;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04cb8a80,0);
LAB_02421b88:
      plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
      puVar2 = PTR_DAT_04cb8a88;
      puVar1 = PTR_DAT_04ca9c08;
      do {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar4 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_02421c08;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)puVar1,0);
LAB_02421c08:
        uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        if ((uVar5 & 1) == 0) {
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar4 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto LAB_02421cd8;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_02421cc0;
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar4 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_02421c6c;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)puVar2,0);
LAB_02421c6c:
        iVar3 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        if (iVar3 == 0x3ec) {
          *param_1 = 1;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
LAB_02421cc0:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02421cf4;
    }
  }
LAB_02421cd8:
  puVar6 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04ca9b30,0);
LAB_02421cf4:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
  return;
}

