/* IL2CPP: Dino.BusSand.View.WorldView$$<BuildPad>g__Lane|43_0
void Dino_BusSand_View_WorldView___BuildPad_g__Lane_43_0 (Dino_BusSand_View_WorldView_o* __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, float yaw, System_String_o* name, Dino_BusSand_View_WorldView___c__DisplayClass43_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$<BuildPad>g__Lane|43_0
   void Dino_BusSand_View_WorldView___BuildPad_g__Lane_43_0 (Dino_BusSand_View_WorldView_o* __this,
   UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, float yaw, System_String_o* name,
   Dino_BusSand_View_WorldView___c__DisplayClass43_0_o* , const MethodInfo* method); */

void Dino_BusSand_View_WorldView___BuildPad_g__Lane_43_0_240a1d0
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               undefined4 param_7,undefined8 param_8,undefined8 param_9,long *param_10)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  
  puVar4 = PTR_DAT_04cbe180;
  puVar3 = PTR_DAT_04cbe170;
  if ((bRam0000000004f9cb2b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe168);
    FUN_02132f7c(PTR_DAT_04cbe170);
    FUN_02132f7c(PTR_DAT_04cbe180);
    FUN_02132f7c(PTR_DAT_04cbc5b8);
    FUN_02132f7c(PTR_DAT_04cbc2b8);
    bRam0000000004f9cb2b = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_ValueTuple_Vector3__float__float_____ctor_39d8fc8
            (lVar6,*(undefined8 *)puVar3);
  if (cRam0000000004f9b9df == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b9df = '\x01';
  }
  puVar3 = PTR_DAT_04caa200;
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (*param_10 != 0) {
    fVar13 = *(float *)(*param_10 + 0xfc);
    fVar15 = SQRT((param_3 - param_6) * (param_3 - param_6) +
                  (param_1 - param_4) * (param_1 - param_4) +
                  (param_2 - param_5) * (param_2 - param_5));
    if (cRam0000000004f9ba93 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9ba93 = '\x01';
    }
    fVar13 = fVar15 / (fVar13 * 0.5);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar5 = PTR_DAT_04cbe168;
    puVar4 = PTR_DAT_04cbc5b8;
    puVar3 = PTR_DAT_04cbc2b8;
    iVar8 = (int)fVar13;
    iVar11 = 0;
    if (iVar8 < 3) {
      iVar8 = 2;
    }
    iVar1 = 2;
    if ((float)(int)fVar13 != INFINITY) {
      iVar1 = iVar8;
    }
    do {
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      fVar14 = (float)iVar11 / (float)iVar1;
      fVar13 = 1.0;
      if (fVar14 <= 1.0) {
        fVar13 = fVar14;
      }
      fVar12 = 0.0;
      if (0.0 <= fVar14) {
        fVar12 = fVar13;
      }
      System_ValueTuple_Vector3__float__float____ctor_3110ad4
                (param_1 + (param_4 - param_1) * fVar12,param_2 + (param_5 - param_2) * fVar12,
                 param_3 + (param_6 - param_3) * fVar12,param_7,
                 ((fVar15 * (float)iVar11) / (float)iVar1) * *(float *)(param_10 + 1),&uStack_d8,
                 *(undefined8 *)puVar4);
      if (lVar6 == 0) goto LAB_0250a50c;
      lVar9 = *(long *)(lVar6 + 0x10);
      lVar10 = *(long *)puVar5;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_0250a50c;
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        lVar9 = lVar9 + (long)(int)uVar2 * 0x14;
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar9 + 0x30) = uStack_c8;
        *(undefined8 *)(lVar9 + 0x28) = uStack_d0;
        *(undefined8 *)(lVar9 + 0x20) = uStack_d8;
      }
      else {
        uStack_b8 = uStack_d0;
        uStack_c0 = uStack_d8;
                    /* try { // try from 0250a464 to 0260a673 has its CatchHandler @ 0250a464
                       catch() { ... } // from try @ 0250a464 with catch @ 0250a464
                       catch() { ... } // from try @ 0250a6f8 with catch @ 0250a464
                       catch() { ... } // from try @ 0250a7bc with catch @ 0250a464
                       catch() { ... } // from try @ 0250a7f0 with catch @ 0250a464
                       catch() { ... } // from try @ 0250a814 with catch @ 0250a464 */
        uStack_b0 = uStack_c8;
        System_Collections_Generic_List_ValueTuple_Vector3__float__float____AddWithResize_39d98d0
                  (lVar6,&uStack_c0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 <= iVar1);
    lVar9 = param_10[3];
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_View_WorldView__Ribbon_2407640((int)lVar9,lVar6);
    lVar6 = Dino_BusSand_View_WorldView__MeshObject_2405c94(param_8,param_9,uVar7,param_10[4],0,1);
    if ((lVar6 != 0) && (lVar6 = UnityEngine_Component__get_transform_43bcd18(lVar6,0), lVar6 != 0))
    {
      UnityEngine_Transform__set_localPosition_43cfda8(0,_UNK_00e20a9c,0,lVar6,0);
      return;
    }
  }
LAB_0250a50c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

