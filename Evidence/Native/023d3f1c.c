/* IL2CPP: Dino.BusSand.App.UI.HallScene$$.cctor
void Dino_BusSand_App_UI_HallScene___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HallScene$$.cctor
   void Dino_BusSand_App_UI_HallScene___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_HallScene___cctor_22d3f1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04cac6d8;
  puVar1 = PTR_DAT_04caa038;
  if ((bRam0000000004f9c3c9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaad0);
    FUN_02132f7c(PTR_DAT_04cac6d8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb6e88);
    FUN_02132f7c(PTR_DAT_04cb6e90);
    FUN_02132f7c(PTR_DAT_04cb6e98);
    FUN_02132f7c(PTR_DAT_04cb6ea0);
    bRam0000000004f9c3c9 = 1;
  }
  puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  *puVar7 = _UNK_00e69bf8;
  lVar8 = *(long *)puVar2;
  *(undefined4 *)(puVar7 + 1) = 0;
  uVar6 = _UNK_00e69cc0;
  uVar4 = *(undefined8 *)puVar1;
  lVar9 = *(long *)(lVar8 + 0xb8);
  *(undefined4 *)(lVar9 + 0x14) = 0xc2253333;
  *(undefined8 *)(lVar9 + 0xc) = uVar6;
  lVar9 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar9 + 0x18) = _UNK_00e69c00;
  *(undefined4 *)(lVar9 + 0x20) = 0;
  uVar6 = _UNK_00e6ada0;
  lVar9 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar9 + 0x2c) = _UNK_00e6ada8;
  *(undefined8 *)(lVar9 + 0x24) = uVar6;
  lVar9 = FUN_02133068(uVar4,3);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_04cb6e90;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20));
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_04cb6ea0;
        thunk_FUN_02134474((undefined8 *)(lVar9 + 0x28));
        puVar3 = PTR_DAT_04cb6e88;
        puVar1 = PTR_DAT_04caaad0;
        if (2 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_04cb6e98;
          thunk_FUN_02134474();
          plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
          *plVar5 = lVar9;
          thunk_FUN_02134474(plVar5,lVar9);
          uVar6 = FUN_02133068(*(undefined8 *)puVar1,6);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                    (uVar6,*(undefined8 *)puVar3,0);
          puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
          *puVar7 = uVar6;
          if (iRam00000000051c1b10 != 0) {
            FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                         ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
          }
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

