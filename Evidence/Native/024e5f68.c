/* IL2CPP: Dino.BusSand.View.SandBoardView$$Redraw
void Dino_BusSand_View_SandBoardView__Redraw (Dino_BusSand_View_SandBoardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.SandBoardView$$Redraw
   void Dino_BusSand_View_SandBoardView__Redraw (Dino_BusSand_View_SandBoardView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_SandBoardView__Redraw_23e5f68(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar7 == 0) {
    return;
  }
  lVar2 = *(long *)(lVar7 + 0x38);
  lVar3 = *(long *)(lVar7 + 0x40);
  uVar5 = *(int *)(lVar7 + 0x14) * *(int *)(lVar7 + 0x10);
  if (*(char *)(param_1 + 0x50) == '\0') {
    if (0 < (int)uVar5) {
      if (lVar2 == 0) goto LAB_024e60d4;
      uVar8 = 0;
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar8) goto LAB_024e60d0;
        if (lVar3 == 0) goto LAB_024e60d4;
        if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_024e60d0;
        lVar7 = *(long *)(param_1 + 0x30);
        uVar6 = Dino_BusSand_View_SandBoardView__Texel_23e60d8
                          (param_1,*(undefined1 *)(lVar2 + 0x20 + uVar8),
                           *(undefined1 *)(lVar3 + 0x20 + uVar8));
        if (lVar7 == 0) goto LAB_024e60d4;
        if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_024e60d0;
        lVar1 = uVar8 * 4;
        uVar8 = uVar8 + 1;
        *(undefined4 *)(lVar7 + lVar1 + 0x20) = uVar6;
      } while (uVar5 != uVar8);
    }
  }
  else if (0 < (int)uVar5) {
    if (lVar2 == 0) goto LAB_024e60d4;
    uVar8 = 0;
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar8) {
LAB_024e60d0:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      bVar4 = *(byte *)(lVar2 + 0x20 + uVar8);
      uVar9 = (uint)bVar4;
      lVar7 = *(long *)(param_1 + 0x30);
      if (bVar4 != 0) {
        if (lVar3 == 0) goto LAB_024e60d4;
        if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_024e60d0;
        uVar9 = (uint)bVar4 | (*(byte *)(lVar3 + 0x20 + uVar8) ^ 0x80) << 8 | 0xff000000;
      }
      if (lVar7 == 0) goto LAB_024e60d4;
      if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_024e60d0;
      lVar1 = uVar8 * 4;
      uVar8 = uVar8 + 1;
      *(uint *)(lVar7 + lVar1 + 0x20) = uVar9;
    } while (uVar5 != uVar8);
  }
                    /* try { // try from 024e607c to 025e654f has its CatchHandler @ 024e607c
                       catch() { ... } // from try @ 024e607c with catch @ 024e607c
                       catch() { ... } // from try @ 024e6644 with catch @ 024e607c
                       catch() { ... } // from try @ 024e66d8 with catch @ 024e607c
                       catch() { ... } // from try @ 024e6704 with catch @ 024e607c */
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_Texture2D__SetPixels32_439edd8
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      UnityEngine_Texture2D__Apply_439ea78(*(long *)(param_1 + 0x28),0,0);
      lVar7 = *(long *)(param_1 + 0x20);
      if (lVar7 != 0) {
        *(undefined1 *)(lVar7 + 0x74) = 0;
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar7 + 0x7c);
        return;
      }
    }
  }
LAB_024e60d4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

