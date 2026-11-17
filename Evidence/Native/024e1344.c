/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$<Torus>g__P|11_0
UnityEngine_Vector3_o Dino_BusSand_View_PropKit_MeshBuilder___Torus_g__P_11_0 (float u, float v, UnityEngine_Vector3_o* n, Dino_BusSand_View_PropKit_MeshBuilder___c__DisplayClass11_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$<Torus>g__P|11_0
   UnityEngine_Vector3_o Dino_BusSand_View_PropKit_MeshBuilder___Torus_g__P_11_0 (float u, float v,
   UnityEngine_Vector3_o* n, Dino_BusSand_View_PropKit_MeshBuilder___c__DisplayClass11_0_o* , const
   MethodInfo* method); */

float Dino_BusSand_View_PropKit_MeshBuilder___Torus_g__P_11_0_23e1344
                (undefined4 param_1,undefined4 param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  if (cRam0000000004f9bcf8 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9bcf8 = '\x01';
  }
  sincosf(param_1,&fStack_54,&fStack_58);
  sincosf(param_2,&fStack_5c,&fStack_60);
  uVar6 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
  fVar7 = fStack_58 * fStack_60 + (float)uVar6 * fStack_5c;
  fVar8 = fStack_60 * 0.0 + (float)((ulong)uVar6 >> 0x20) * fStack_5c;
  fVar9 = fStack_54 * fStack_60 +
          fStack_5c * *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
  *param_3 = CONCAT44(fVar8,fVar7);
  *(float *)(param_3 + 1) = fVar9;
  fVar1 = *param_4;
  fVar3 = param_4[1];
  fVar10 = param_4[2];
  fVar4 = param_4[4];
  fVar5 = param_4[5];
  uVar2 = UnityEngine_Quaternion__op_Multiply_43af48c
                    (param_4[3],fVar4,fVar5,param_4[6],fVar7,fVar8,0);
  *(undefined4 *)param_3 = uVar2;
  *(float *)((long)param_3 + 4) = fVar4;
  *(float *)(param_3 + 1) = fVar5;
  fVar4 = param_4[7];
  fVar1 = (float)UnityEngine_Quaternion__op_Multiply_43af48c
                           (param_4[3],param_4[4],param_4[5],param_4[6],
                            fVar10 * (fStack_58 * fVar1 + fVar3 * fVar7),fVar1 * 0.0 + fVar3 * fVar8
                            ,fStack_54 * fVar1 + fVar9 * fVar3,0);
  return fVar4 + fVar1;
}

