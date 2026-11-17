/* IL2CPP: Dino.BusSand.View.MechFx$$LateUpdate
void Dino_BusSand_View_MechFx__LateUpdate (Dino_BusSand_View_MechFx_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechFx$$LateUpdate
   void Dino_BusSand_View_MechFx__LateUpdate (Dino_BusSand_View_MechFx_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_View_MechFx__LateUpdate_23be940
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  long alStack_a0 [2];
  float fStack_90;
  long lStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  
  if ((bRam0000000004f9c9b9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbcfd8);
    FUN_02132f7c(PTR_DAT_04cbcfc8);
    FUN_02132f7c(PTR_DAT_04cbcfd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9b9 = 1;
  }
  fVar12 = (float)UnityEngine_Time__get_time_43cd540(0);
  puVar3 = PTR_DAT_04cbcfd8;
  puVar2 = PTR_DAT_04cbcfd0;
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_4 + 0x38) != 0) {
    iVar11 = *(int *)(*(long *)(param_4 + 0x38) + 0x18);
    if (-1 < iVar11 + -1) {
      do {
        if (*(long *)(param_4 + 0x38) == 0) goto LAB_024beaf0;
        iVar11 = iVar11 + -1;
        System_Collections_Generic_List_ValueTuple_object__object__float__object__Vector3____get_Item_39decf4
                  (alStack_a0,*(long *)(param_4 + 0x38),iVar11,*(undefined8 *)puVar2);
        fVar8 = fStack_78;
        fVar7 = fStack_7c;
        fVar6 = fStack_80;
        lVar5 = lStack_88;
        fVar4 = fStack_90;
        lVar10 = alStack_a0[0];
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
        if ((uVar9 & 1) == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
          if ((uVar9 & 1) != 0) {
            if (((lVar10 == 0) ||
                (lVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0), lVar5 == 0)) ||
               (fVar13 = (float)UnityEngine_Transform__get_position_43d0e48(lVar5,0), lVar10 == 0))
            goto LAB_024beaf0;
            param_3 = fVar8 + param_3;
            param_2 = fVar7 + param_2;
            UnityEngine_Transform__set_position_43d0f1c(fVar6 + fVar13,param_2,param_3,lVar10,0);
          }
          if (fVar4 <= fVar12) {
            Dino_BusSand_View_MechFx__Release_23be78c(param_4,iVar11);
          }
        }
        else {
          if (*(long *)(param_4 + 0x38) == 0) goto LAB_024beaf0;
          System_Collections_Generic_List_ValueTuple_object__object__float__object__Vector3____RemoveAt_39e0b5c
                    (*(long *)(param_4 + 0x38),iVar11,*(undefined8 *)puVar3);
        }
      } while (0 < iVar11);
    }
    return;
  }
LAB_024beaf0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

