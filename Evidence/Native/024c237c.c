/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Dir
UnityEngine_Vector3_o Dino_BusSand_View_MechanicLayer__Dir (Dino_BusSand_View_MechanicLayer_o* __this, double cx, double cz, double hx, double hz, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Dir
   UnityEngine_Vector3_o Dino_BusSand_View_MechanicLayer__Dir (Dino_BusSand_View_MechanicLayer_o*
   __this, double cx, double cz, double hx, double hz, const MethodInfo* method); */

float Dino_BusSand_View_MechanicLayer__Dir_23c237c
                (double param_1,double param_2,undefined1 param_3 [16],double param_4,long param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = param_3._0_4_;
  if (*(long *)(param_5 + 0x28) != 0) {
    fVar5 = SUB84(param_2 + param_4,0);
    fVar1 = (float)Dino_BusSand_View_StageLayout__YardToWorld_23e8904
                             (param_1 + param_3._0_8_,*(long *)(param_5 + 0x28),0);
    if (*(long *)(param_5 + 0x28) != 0) {
      fVar3 = fVar4;
      fVar2 = (float)Dino_BusSand_View_StageLayout__YardToWorld_23e8904
                               (param_1,*(long *)(param_5 + 0x28),0);
      if (cRam0000000004f9b65c == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9b65c = '\x01';
      }
      fVar1 = fVar1 - fVar2;
      fVar5 = fVar5 - SUB84(param_2,0);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar4 = SQRT((fVar4 - fVar3) * (fVar4 - fVar3) + fVar1 * fVar1 + fVar5 * fVar5);
      if (fVar4 <= _UNK_00e20a08) {
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        fVar1 = **(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      }
      else {
        fVar1 = fVar1 / fVar4;
      }
      return fVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

