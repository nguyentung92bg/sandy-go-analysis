/* IL2CPP: Dino.BusSand.View.GrainParticles$$SetTarget
void Dino_BusSand_View_GrainParticles__SetTarget (Dino_BusSand_View_GrainParticles_o* __this, int32_t slot, UnityEngine_Transform_o* t, UnityEngine_Vector3_o localOffset, System_Action_int__o* onArrive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GrainParticles$$SetTarget
   void Dino_BusSand_View_GrainParticles__SetTarget (Dino_BusSand_View_GrainParticles_o* __this,
   int32_t slot, UnityEngine_Transform_o* t, UnityEngine_Vector3_o localOffset,
   System_Action_int__o* onArrive, const MethodInfo* method); */

void Dino_BusSand_View_GrainParticles__SetTarget_23b4d00
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,uint param_5,
               long param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((bRam0000000004f9c97d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc990);
    FUN_02132f7c(PTR_DAT_04cb7810);
    FUN_02132f7c(PTR_DAT_04cbc998);
    FUN_02132f7c(PTR_DAT_04cbc9a0);
    bRam0000000004f9c97d = 1;
  }
  plVar6 = *(long **)(param_4 + 0x138);
  if (plVar6 != (long *)0x0) {
    if ((int)plVar6[3] <= (int)param_5) {
      iVar1 = param_5 << 1;
      System_Array__Resize_object__2664d64(param_4 + 0x138,iVar1,*(undefined8 *)PTR_DAT_04cbc998);
      puVar2 = PTR_DAT_04cbc9a0;
      System_Array__Resize_Vector3__2666600(param_4 + 0x140,iVar1,*(undefined8 *)PTR_DAT_04cbc9a0);
      System_Array__Resize_object__2664d64(param_4 + 0x148,iVar1,*(undefined8 *)PTR_DAT_04cbc990);
      System_Array__Resize_Vector3__2666600(param_4 + 0x150,iVar1,*(undefined8 *)puVar2);
      System_Array__Resize_int__2663f54(param_4 + 0x158,iVar1,*(undefined8 *)PTR_DAT_04cb7810);
      plVar6 = *(long **)(param_4 + 0x138);
      if (plVar6 == (long *)0x0) goto LAB_024b4ea0;
    }
    if ((param_6 != 0) &&
       (lVar3 = thunk_FUN_0216e7a0(param_6,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0)) {
      uVar5 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar5,0);
    }
    if (param_5 < *(uint *)(plVar6 + 3)) {
      plVar6[(long)(int)param_5 + 4] = param_6;
      thunk_FUN_02134474(plVar6 + (long)(int)param_5 + 4,param_6);
      lVar3 = *(long *)(param_4 + 0x140);
      if (lVar3 == 0) goto LAB_024b4ea0;
      if (param_5 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)param_5 * 0xc;
        *(undefined4 *)(lVar3 + 0x20) = param_1;
        *(undefined4 *)(lVar3 + 0x24) = param_2;
        *(undefined4 *)(lVar3 + 0x28) = param_3;
        lVar3 = *(long *)(param_4 + 0x148);
        if (lVar3 == 0) goto LAB_024b4ea0;
        if (param_5 < *(uint *)(lVar3 + 0x18)) {
          puVar4 = (undefined8 *)(lVar3 + (long)(int)param_5 * 8 + 0x20);
          *puVar4 = param_7;
          if (iRam00000000051c1b10 != 0) {
            FUN_02220bf0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                         ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
          }
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_024b4ea0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

