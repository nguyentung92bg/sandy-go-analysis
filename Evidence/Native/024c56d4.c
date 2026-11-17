/* IL2CPP: Dino.BusSand.View.MechanicLayer$$AlongPath
void Dino_BusSand_View_MechanicLayer__AlongPath (System_Collections_Generic_List_Vector3__o* path, float back, UnityEngine_Vector3_o* pos, UnityEngine_Vector3_o* fwd, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$AlongPath
   void Dino_BusSand_View_MechanicLayer__AlongPath (System_Collections_Generic_List_Vector3__o*
   path, float back, UnityEngine_Vector3_o* pos, UnityEngine_Vector3_o* fwd, const MethodInfo*
   method); */

void Dino_BusSand_View_MechanicLayer__AlongPath_23c56d4
               (float param_1,float param_2,float param_3,long param_4,float *param_5,float *param_6
               )

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((bRam0000000004f9c9ce & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    bRam0000000004f9c9ce = 1;
  }
  puVar2 = PTR_DAT_04caa200;
  puVar1 = PTR_DAT_04caa1a8;
  if (param_4 != 0) {
    iVar6 = *(int *)(param_4 + 0x18) + -1;
    if (iVar6 < 1) {
      fVar11 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (param_4,0,*(undefined8 *)PTR_DAT_04caa1a8);
      *param_5 = fVar11;
      param_5[1] = param_2;
      cVar3 = cRam0000000004f9c41d;
      param_5[2] = param_3;
      if (cVar3 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9c41d = '\x01';
      }
      lVar4 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      param_2 = *(float *)(lVar4 + 0x4c);
      param_3 = *(float *)(lVar4 + 0x50);
      *param_6 = *(float *)(lVar4 + 0x48);
    }
    else {
      while( true ) {
        fVar7 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                 (param_4,iVar6,*(undefined8 *)puVar1);
        fVar11 = param_2;
        fVar10 = param_3;
        fVar8 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                 (param_4,iVar6 + -1,*(undefined8 *)puVar1);
        fVar9 = fVar10;
        if (cRam0000000004f9b9df == '\0') {
          FUN_02132f7c(puVar2);
          cRam0000000004f9b9df = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar11 = param_2 - fVar11;
        fVar8 = fVar7 - fVar8;
        fVar10 = param_3 - fVar10;
        iVar6 = iVar6 + -1;
        fVar12 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar11 * fVar11);
        if ((iVar6 == 0) || (param_1 <= fVar12)) break;
        param_1 = param_1 - fVar12;
        param_2 = fVar10 * fVar10;
        param_3 = fVar9;
      }
      if (cRam0000000004f9b65c == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9b65c = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (fVar12 <= _UNK_00e20a08) {
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        pfVar5 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
        fVar8 = *pfVar5;
        fVar11 = pfVar5[1];
        fVar10 = pfVar5[2];
      }
      else {
        fVar8 = fVar8 / fVar12;
        fVar11 = fVar11 / fVar12;
        fVar10 = fVar10 / fVar12;
      }
      *param_6 = fVar8;
      param_6[1] = fVar11;
      param_6[2] = fVar10;
      param_2 = param_2 - param_1 * fVar11;
      param_3 = param_3 - param_1 * fVar10;
      *param_5 = fVar7 - param_1 * fVar8;
      param_6 = param_5;
    }
    param_6[1] = param_2;
    param_6[2] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

