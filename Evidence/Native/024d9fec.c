/* IL2CPP: Dino.BusSand.View.PaintingLayer$$Update
void Dino_BusSand_View_PaintingLayer__Update (Dino_BusSand_View_PaintingLayer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PaintingLayer$$Update
   void Dino_BusSand_View_PaintingLayer__Update (Dino_BusSand_View_PaintingLayer_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_PaintingLayer__Update_23d9fec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000004f9ca36 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc398);
    bRam0000000004f9ca36 = 1;
  }
  puVar1 = PTR_DAT_04cbc398;
  if (*(char *)(param_1 + 0x70) != '\0') {
    fVar9 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
    uVar5 = 0;
    lVar6 = 8;
    do {
      lVar2 = *(long *)(param_1 + 0x48);
      if (lVar2 == 0) goto LAB_024da130;
      uVar7 = lVar6 - 8;
      if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_024da134;
      fVar11 = *(float *)(lVar2 + lVar6 * 4);
      if (0.0 <= fVar11) {
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar2 = *(long *)puVar1;
        }
        lVar3 = *(long *)(lVar2 + 0xb8);
        fVar10 = *(float *)(lVar3 + 4);
        if (fVar11 < fVar10) {
          lVar8 = *(long *)(param_1 + 0x48);
          lVar4 = lVar8;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar4 = *(long *)(param_1 + 0x48);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            fVar10 = *(float *)(lVar3 + 4);
          }
          if (lVar4 == 0) {
LAB_024da130:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(uint *)(lVar4 + 0x18) <= uVar7) {
LAB_024da134:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          fVar11 = fVar9 + *(float *)(lVar4 + lVar6 * 4);
          if (fVar11 <= fVar10) {
            fVar10 = fVar11;
          }
          if (lVar8 == 0) goto LAB_024da130;
          if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_024da134;
          *(float *)(lVar8 + lVar6 * 4) = fVar10;
          if (*(float *)(lVar4 + lVar6 * 4) < *(float *)(lVar3 + 4)) {
            uVar5 = 1;
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x88);
    Dino_BusSand_View_PaintingLayer__WriteWash_23d93c4(param_1);
    *(undefined1 *)(param_1 + 0x70) = uVar5;
  }
  return;
}

