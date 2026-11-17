/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Settle
void Dino_BusSand_App_UI_HomeToonFace__Settle (Dino_BusSand_App_UI_HomeToonFace_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Settle
   void Dino_BusSand_App_UI_HomeToonFace__Settle (Dino_BusSand_App_UI_HomeToonFace_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonFace__Settle_22f28a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  
  if ((bRam0000000004f9c473 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71a8);
    bRam0000000004f9c473 = 1;
  }
  puVar2 = PTR_DAT_04cb71a8;
  uVar8 = 0;
  do {
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_023f2b24;
    if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_023f2b20;
    uVar10 = *(uint *)(lVar4 + uVar8 * 4 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if ((uVar10 >> 0x17 & 0xff) < 0xff) {
      lVar4 = *(long *)(param_1 + 0x28);
      if (lVar4 == 0) goto LAB_023f2b24;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_023f2b20;
      uVar10 = *(uint *)(lVar4 + uVar8 * 4 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (0xfe < (uVar10 >> 0x17 & 0xff)) goto LAB_023f2960;
    }
    else {
LAB_023f2960:
      lVar4 = *(long *)(param_1 + 0x30);
      if (lVar4 == 0) {
LAB_023f2b24:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar8) {
LAB_023f2b20:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 == 0) goto LAB_023f2b24;
      if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_023f2b20;
      lVar5 = *(long *)(param_1 + 0x28);
      *(undefined4 *)(lVar6 + uVar8 * 4 + 0x20) = *(undefined4 *)(lVar4 + uVar8 * 4 + 0x20);
      if (lVar5 == 0) goto LAB_023f2b24;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_023f2b20;
      *(undefined4 *)(lVar5 + uVar8 * 4 + 0x20) = 0;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 5);
  lVar4 = *(long *)puVar2;
  uVar10 = *(uint *)(param_1 + 0x6c);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  if ((uVar10 >> 0x17 & 0xff) < 0xff) {
    uVar10 = *(uint *)(param_1 + 0x70);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    if ((uVar10 >> 0x17 & 0xff) < 0xff) {
      uVar10 = *(uint *)(param_1 + 0x74);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      if ((uVar10 >> 0x17 & 0xff) < 0xff) {
        uVar10 = *(uint *)(param_1 + 0x78);
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if ((uVar10 >> 0x17 & 0xff) < 0xff) {
          return;
        }
        lVar4 = *(long *)puVar2;
      }
    }
  }
  puVar9 = (uint *)(param_1 + 0x7c);
  uVar10 = *puVar9;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cacfc0;
  if ((uVar10 >> 0x17 & 0xff) < 0xff) {
    puVar7 = (uint *)(param_1 + 0x80);
    uVar10 = *puVar7;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if ((uVar10 >> 0x17 & 0xff) < 0xff) goto LAB_023f2ad4;
  }
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar9 = *(uint **)(*(long *)puVar1 + 0xb8);
  puVar7 = puVar9 + 1;
LAB_023f2ad4:
  cVar3 = cRam0000000004f9b948;
  uVar10 = *puVar7;
  *(uint *)(param_1 + 0x6c) = *puVar9;
  *(uint *)(param_1 + 0x70) = uVar10;
  if (cVar3 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  *(undefined8 *)(param_1 + 0x74) = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  return;
}

