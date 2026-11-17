/* IL2CPP: Dino.BusSand.View.GrainParticles$$ClearTarget
void Dino_BusSand_View_GrainParticles__ClearTarget (Dino_BusSand_View_GrainParticles_o* __this, int32_t slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GrainParticles$$ClearTarget
   void Dino_BusSand_View_GrainParticles__ClearTarget (Dino_BusSand_View_GrainParticles_o* __this,
   int32_t slot, const MethodInfo* method); */

void Dino_BusSand_View_GrainParticles__ClearTarget_23b4eb4(long param_1,float param_2)

{
  float fVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  
  lVar3 = *(long *)(param_1 + 0x138);
  if (lVar3 != 0) {
    if ((int)param_2 < (int)*(float *)(lVar3 + 0x18)) {
      if ((uint)*(float *)(lVar3 + 0x18) <= (uint)param_2) {
LAB_024b4f84:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      puVar2 = (undefined8 *)(lVar3 + (long)(int)param_2 * 8 + 0x20);
      *puVar2 = 0;
      thunk_FUN_02134474(puVar2,0);
      lVar3 = *(long *)(param_1 + 0x148);
      if (lVar3 == 0) goto LAB_024b4f88;
      if ((uint)*(float *)(lVar3 + 0x18) <= (uint)param_2) goto LAB_024b4f84;
      puVar2 = (undefined8 *)(lVar3 + (long)(int)param_2 * 8 + 0x20);
      *puVar2 = 0;
      thunk_FUN_02134474(puVar2,0);
    }
    fVar1 = _UNK_00e20094;
    uVar4 = (ulong)*(uint *)(param_1 + 0x30);
    if (0 < (int)*(uint *)(param_1 + 0x30)) {
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 == 0) goto LAB_024b4f88;
      uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
      pfVar6 = (float *)(lVar3 + 0x60);
      do {
        if (uVar5 == 0) goto LAB_024b4f84;
        if ((*(char *)(pfVar6 + -0x10) == '\0') && (pfVar6[7] == param_2)) {
          *(undefined1 *)(pfVar6 + -0x10) = 1;
          pfVar6[1] = *pfVar6 + fVar1;
        }
        uVar4 = uVar4 - 1;
        uVar5 = uVar5 - 1;
        pfVar6 = pfVar6 + 0x22;
      } while (uVar4 != 0);
    }
    return;
  }
LAB_024b4f88:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

