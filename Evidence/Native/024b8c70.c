/* IL2CPP: Dino.BusSand.View.HighwayMesh$$Sample
void Dino_BusSand_View_HighwayMesh__Sample (System_Collections_Generic_List_Vector3__o* p, System_Single_array* cum, float s, float delta, UnityEngine_Vector3_o* pos, UnityEngine_Vector3_o* fwd, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.HighwayMesh$$Sample
   void Dino_BusSand_View_HighwayMesh__Sample (System_Collections_Generic_List_Vector3__o* p,
   System_Single_array* cum, float s, float delta, UnityEngine_Vector3_o* pos,
   UnityEngine_Vector3_o* fwd, const MethodInfo* method); */

void Dino_BusSand_View_HighwayMesh__Sample_23b8c70
               (float param_1,float param_2,float param_3,long param_4,undefined8 param_5,
               undefined4 *param_6,float *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  
  puVar2 = PTR_DAT_04cbc9d8;
  fVar4 = param_2;
  if ((bRam0000000004f9c98b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc9d8);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    bRam0000000004f9c98b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_View_HighwayMesh__At_23b8ef4(param_1,param_4,param_5);
  *param_6 = uVar3;
  param_6[1] = fVar4;
  param_6[2] = param_3;
  fVar4 = (float)Dino_BusSand_View_HighwayMesh__At_23b8ef4(param_1 - param_2,param_4,param_5);
  fVar7 = param_3;
  fVar5 = (float)Dino_BusSand_View_HighwayMesh__At_23b8ef4(param_1 + param_2,param_4,param_5);
  fVar5 = fVar5 - fVar4;
  param_3 = fVar7 - param_3;
  param_7[1] = 0.0;
  *param_7 = fVar5;
  param_7[2] = param_3;
  puVar1 = PTR_DAT_04caa1a8;
  fVar4 = fVar5 * fVar5 + param_3 * param_3;
  if (fVar4 <= _UNK_00e20b38) {
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar5 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                             (param_4,*(int *)(param_4 + 0x18) + -1,*(undefined8 *)PTR_DAT_04caa1a8)
    ;
    param_3 = fVar7;
    fVar4 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                             (param_4,0,*(undefined8 *)puVar1);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b65c == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b65c = '\x01';
    }
    fVar5 = fVar5 - fVar4;
    param_3 = fVar7 - param_3;
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar4 = param_3 * param_3 + fVar5 * fVar5;
  }
  else {
    if (cRam0000000004f9b65c == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b65c = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
  }
  fVar4 = SQRT(fVar4);
  if (fVar4 <= _UNK_00e20a08) {
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    uVar6 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
    param_3 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
  }
  else {
    param_3 = param_3 / fVar4;
    uVar6 = CONCAT44(0.0 / fVar4,fVar5 / fVar4);
  }
  *(undefined8 *)param_7 = uVar6;
  param_7[2] = param_3;
  return;
}

