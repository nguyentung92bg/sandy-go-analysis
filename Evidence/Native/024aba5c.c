/* IL2CPP: Dino.BusSand.View.GameView$$.cctor
void Dino_BusSand_View_GameView___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$.cctor
   void Dino_BusSand_View_GameView___cctor (const MethodInfo* method); */

void Dino_BusSand_View_GameView___cctor_23aba5c(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar5 = PTR_DAT_04cb6a60;
  puVar4 = PTR_DAT_04cb2870;
  if ((bRam0000000004f9c956 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cb2870);
    bRam0000000004f9c956 = 1;
  }
  uVar2 = _UNK_00e69618;
  lVar7 = *(long *)puVar4;
  uVar10 = NEON_fmov(0x3e800000,4);
  puVar8 = *(undefined8 **)(lVar7 + 0xb8);
  uVar6 = *(undefined8 *)puVar5;
  puVar8[4] = uVar10;
  uVar10 = _UNK_00e6a898;
  *(undefined4 *)((long)puVar8 + 0x34) = 0x3f000000;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x3f4ccccd;
  *(undefined8 *)((long)puVar8 + 0x2c) = uVar10;
  uVar3 = _UNK_00e6bc58;
  uVar10 = _UNK_00e6bc50;
  *(undefined1 *)(puVar8 + 5) = 1;
  *(undefined2 *)(puVar8 + 7) = 1;
  puVar8[10] = uVar3;
  puVar8[9] = uVar10;
  uVar10 = _UNK_00e6a470;
  *puVar8 = uVar2;
  puVar8[8] = uVar10;
  uVar10 = _UNK_00e6b0d8;
  uVar2 = _UNK_00e6b0d0;
  lVar9 = *(long *)(lVar7 + 0xb8);
  *(undefined1 *)(puVar8 + 2) = 0;
  *(undefined4 *)((long)puVar8 + 0x3c) = 0x3d75c28f;
  *(undefined8 *)(lVar9 + 0x60) = uVar10;
  *(undefined8 *)(lVar9 + 0x58) = uVar2;
  *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x68) = 0xffd6f6ff;
  *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x6c) = 0xff3cbeff;
  *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x70) = 0xff78d6ff;
  lVar7 = FUN_02133068(uVar6,6);
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if ((((uVar1 != 0) && (*(undefined4 *)(lVar7 + 0x20) = 0xff28c4ff, uVar1 != 1)) &&
        (*(undefined4 *)(lVar7 + 0x24) = 0xffa040ff, 2 < uVar1)) &&
       (((*(undefined4 *)(lVar7 + 0x28) = 0xffffc428, uVar1 != 3 &&
         (*(undefined4 *)(lVar7 + 0x2c) = 0xff3ce678, 4 < uVar1)) &&
        (*(undefined4 *)(lVar7 + 0x30) = 0xff2870ff, uVar1 != 5)))) {
      *(undefined4 *)(lVar7 + 0x34) = 0xffff60aa;
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78) = lVar7;
      thunk_FUN_02134474();
      uVar2 = _UNK_00e6b050;
      lVar7 = *(long *)puVar4;
      lVar9 = *(long *)(lVar7 + 0xb8);
      *(undefined8 *)(lVar9 + 0x88) = _UNK_00e6b058;
      *(undefined8 *)(lVar9 + 0x80) = uVar2;
      *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x90) = 0x40200000;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

