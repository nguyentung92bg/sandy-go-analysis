/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Beats
float Dino_BusSand_App_UI_UiMotion__Beats (UnityEngine_Transform_o* page, float start, float step, System_String_array_array* groups, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Beats
   float Dino_BusSand_App_UI_UiMotion__Beats (UnityEngine_Transform_o* page, float start, float
   step, System_String_array_array* groups, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_App_UI_UiMotion__Beats_2290f98
          (float param_1,float param_2,float param_3,long param_4,long param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong extraout_d0;
  undefined1 auVar15 [16];
  float fVar16;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar4 = PTR_DAT_04ca9ae8;
  fVar16 = param_2;
  if ((bRam0000000004f9c1c2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5378);
    FUN_02132f7c(PTR_DAT_04cb5380);
    FUN_02132f7c(PTR_DAT_04cb18b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1c2 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(param_4,0,0);
  puVar7 = PTR_DAT_04cb5378;
  puVar6 = PTR_DAT_04cb18b8;
  puVar5 = PTR_DAT_04cad4c0;
  fVar3 = _UNK_00e206e4;
  fVar2 = _UNK_00e20094;
  uVar14 = 0;
  if ((uVar8 & 1) == 0) {
    if (param_5 == 0) {
LAB_02391224:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(param_5 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
LAB_02391228:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c(uVar14);
        }
        lVar13 = *(long *)(param_5 + uVar8 * 8 + 0x20);
        if (lVar13 == 0) goto LAB_02391224;
        if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
          uVar12 = 0;
          uVar11 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar12) goto LAB_02391228;
            if (param_4 == 0) goto LAB_02391224;
            lVar9 = UnityEngine_Transform__Find_43d4bec
                              (param_4,*(undefined8 *)(lVar13 + 0x20 + uVar12 * 8),0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
            uVar14 = extraout_d0;
            if ((uVar11 & 1) == 0) {
              if (lVar9 == 0) goto LAB_02391224;
              lVar10 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar9,*(undefined8 *)puVar7);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar4);
              }
              uVar14 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
              if ((uVar14 & 1) == 0) {
                if (lVar10 == 0) goto LAB_02391224;
                uVar14 = (ulong)*(uint *)(lVar10 + 0x20);
              }
              else {
                lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
                if (lVar10 == 0) goto LAB_02391224;
                lVar10 = UnityEngine_GameObject__AddComponent_object__275a54c
                                   (lVar10,*(undefined8 *)PTR_DAT_04cb5380);
                uVar14 = UnityEngine_Transform__get_localScale_43d1b0c(lVar9,0);
                if (lVar10 == 0) goto LAB_02391224;
                *(int *)(lVar10 + 0x20) = (int)uVar14;
                *(float *)(lVar10 + 0x24) = fVar16;
                *(float *)(lVar10 + 0x28) = param_3;
              }
              uStack_90 = 0;
              uStack_88 = 0;
              System_Nullable_Vector3____ctor_2bd0e4c(uVar14,&uStack_90,*(undefined8 *)puVar6);
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              fVar16 = fVar2;
              param_3 = fVar3;
              uVar14 = Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                                 (param_1,fVar2,fVar3,0x40000000,lVar9,uStack_90,uStack_88);
            }
            uVar11 = (ulong)*(uint *)(lVar13 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar13 + 0x18));
        }
        param_1 = param_1 + param_2;
        uVar8 = uVar8 + 1;
        uVar1 = *(uint *)(param_5 + 0x18);
      } while ((int)uVar8 < (int)uVar1);
    }
    uVar14 = (ulong)(uint)((param_1 - param_2) + _UNK_00e206e4);
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar14;
  return auVar15;
}

