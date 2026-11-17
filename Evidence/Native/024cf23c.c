/* IL2CPP: Dino.BusSand.View.MechanicLayer$$LiftWave
void Dino_BusSand_View_MechanicLayer__LiftWave (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_Core_Lift_o* lift, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$LiftWave
   void Dino_BusSand_View_MechanicLayer__LiftWave (Dino_BusSand_View_MechanicLayer_o* __this,
   Dino_BusSand_Core_Lift_o* lift, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__LiftWave_23cf23c
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long param_5)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((bRam0000000004f9c9ee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c9ee = 1;
  }
  puVar2 = PTR_DAT_04caa200;
  if (param_5 != 0) {
    lVar4 = *(long *)(param_5 + 0x28);
    lVar3 = *(long *)(param_4 + 0x28);
    if (lVar4 == 0) {
      if (lVar3 == 0) goto LAB_024cf3bc;
      uVar7 = *(undefined8 *)(param_5 + 0x20);
      fVar5 = (float)Dino_BusSand_View_StageLayout__YardToWorld_23e8904
                               (*(undefined8 *)(param_5 + 0x18),uVar7,lVar3,0);
      fVar1 = (float)uVar7;
      dVar6 = *(double *)(param_5 + 0x58) + *(double *)(param_5 + 0x58);
    }
    else {
      if (lVar3 == 0) goto LAB_024cf3bc;
      uVar7 = *(undefined8 *)(lVar4 + 0x18);
      fVar5 = (float)Dino_BusSand_View_StageLayout__YardToWorld_23e8904
                               (*(undefined8 *)(lVar4 + 0x10),uVar7,lVar3,0);
      fVar1 = (float)uVar7;
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      uVar8 = *(undefined8 *)(lVar4 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      dVar6 = (double)System_Math__Max_4830f98(uVar7,uVar8,0);
    }
    lVar3 = *(long *)(param_4 + 0x38);
    if (lVar3 != 0) {
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      lVar4 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      Dino_BusSand_View_Fx__GroundRing_2398c44
                (fVar5 + *(float *)(lVar4 + 0x18) * _UNK_00e20844,
                 fVar1 + *(float *)(lVar4 + 0x1c) * _UNK_00e20844,
                 param_3 + *(float *)(lVar4 + 0x20) * _UNK_00e20844,0x3f800000,0x3f800000,0x3f800000
                 ,_UNK_00e1fea8,((float)dVar6 + _UNK_00e1feac) * *(float *)(param_4 + 0x50),lVar3,0)
      ;
    }
    return;
  }
LAB_024cf3bc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

