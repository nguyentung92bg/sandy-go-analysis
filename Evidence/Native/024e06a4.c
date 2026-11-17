/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$ConeAt
void Dino_BusSand_View_PropKit_MeshBuilder__ConeAt (Dino_BusSand_View_PropKit_MeshBuilder_o* __this, UnityEngine_Vector3_o at, UnityEngine_Vector3_o dir, float radius, float length, UnityEngine_Color_o col, float emit, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$ConeAt
   void Dino_BusSand_View_PropKit_MeshBuilder__ConeAt (Dino_BusSand_View_PropKit_MeshBuilder_o*
   __this, UnityEngine_Vector3_o at, UnityEngine_Vector3_o dir, float radius, float length,
   UnityEngine_Color_o col, float emit, const MethodInfo* method); */

void Dino_BusSand_View_PropKit_MeshBuilder__ConeAt_23e06a4
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               undefined4 param_7,float param_8,undefined8 param_9)

{
  float *pfVar1;
  float fVar2;
  
  if (cRam0000000004f9b65c == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b65c = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar2 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5);
  if (fVar2 <= _UNK_00e20a08) {
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
    param_4 = *pfVar1;
    param_5 = pfVar1[1];
    param_6 = pfVar1[2];
  }
  else {
    param_4 = param_4 / fVar2;
    param_5 = param_5 / fVar2;
    param_6 = param_6 / fVar2;
  }
  Dino_BusSand_View_PropKit_MeshBuilder__Cylinder_23df990
            (param_1 - param_4 * param_8 * _UNK_00e20590,param_2 - param_5 * param_8 * _UNK_00e20590
             ,param_3 - param_6 * param_8 * _UNK_00e20590,
             param_1 + param_4 * param_8 * _UNK_00e20440,param_2 + param_5 * param_8 * _UNK_00e20440
             ,param_3 + param_6 * param_8 * _UNK_00e20440,param_7,0,param_9,10);
  return;
}

