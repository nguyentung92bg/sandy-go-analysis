/* IL2CPP: Dino.BusSand.View.WorldView$$<RoundedRectRing>g__Arc|52_0
void Dino_BusSand_View_WorldView___RoundedRectRing_g__Arc_52_0 (float cx, float cz, float a0, Dino_BusSand_View_WorldView___c__DisplayClass52_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$<RoundedRectRing>g__Arc|52_0
   void Dino_BusSand_View_WorldView___RoundedRectRing_g__Arc_52_0 (float cx, float cz, float a0,
   Dino_BusSand_View_WorldView___c__DisplayClass52_0_o* , const MethodInfo* method); */

void Dino_BusSand_View_WorldView___RoundedRectRing_g__Arc_52_0_240aeb8
               (float param_1,float param_2,float param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fStack_58;
  float fStack_54;
  
  if ((bRam0000000004f9cb2c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa170);
    bRam0000000004f9cb2c = 1;
  }
  puVar4 = PTR_DAT_04caa170;
  fVar3 = _UNK_00e20a74;
  iVar1 = *param_4;
  if (-1 < iVar1) {
    iVar8 = 0;
    do {
      lVar7 = *(long *)(param_4 + 2);
      sincosf((((float)iVar8 * 90.0) / (float)iVar1 + param_3) * fVar3,&fStack_54,&fStack_58);
      if (lVar7 == 0) {
LAB_0250aff4:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar5 = *(long *)(lVar7 + 0x10);
      fVar10 = (float)param_4[4];
      lVar6 = *(long *)puVar4;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_0250aff4;
      uVar2 = *(uint *)(lVar7 + 0x18);
      fVar9 = fStack_58 * fVar10 + param_1;
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)uVar2 * 0xc;
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        *(float *)(lVar5 + 0x20) = fVar9;
        *(undefined4 *)(lVar5 + 0x24) = 0;
        *(float *)(lVar5 + 0x28) = fStack_54 * fVar10 + param_2;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (fVar9,0,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      iVar1 = *param_4;
      iVar8 = iVar8 + 1;
    } while (iVar8 <= iVar1);
  }
  return;
}

