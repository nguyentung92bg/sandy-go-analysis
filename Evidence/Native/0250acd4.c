/* IL2CPP: Dino.BusSand.View.WorldView$$RoundedRectRing
System_Collections_Generic_List_Vector3__o* Dino_BusSand_View_WorldView__RoundedRectRing (float x0, float z0, float x1, float z1, float r, int32_t seg, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.WorldView$$RoundedRectRing
   System_Collections_Generic_List_Vector3__o* Dino_BusSand_View_WorldView__RoundedRectRing (float
   x0, float z0, float x1, float z1, float r, int32_t seg, const MethodInfo* method); */

undefined8
Dino_BusSand_View_WorldView__RoundedRectRing_240acd4
          (float param_1,float param_2,float param_3,float param_4,float param_5,uint param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  float *pfVar9;
  ulong uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_04caadd0;
  if ((bRam0000000004f9cb22 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cbc2b8);
    bRam0000000004f9cb22 = 1;
  }
  uStack_60 = 0;
  uStack_68 = (ulong)param_6;
  uStack_54 = 0;
  fStack_58 = param_5;
  lVar5 = FUN_02133068(*(undefined8 *)puVar1,3);
  if (lVar5 != 0) {
    uVar7 = (uint)*(ulong *)(lVar5 + 0x18);
    if (((uVar7 != 0) && (*(float *)(lVar5 + 0x20) = param_5, uVar7 != 1)) &&
       (*(float *)(lVar5 + 0x24) = (param_3 - param_1) * 0.5, puVar3 = PTR_DAT_04cbc2b8,
       puVar2 = PTR_DAT_04cb3c10, puVar1 = PTR_DAT_04caa1d0, 2 < uVar7)) {
      *(float *)(lVar5 + 0x28) = (param_4 - param_2) * 0.5;
      if (1 < (int)uVar7) {
        lVar8 = (*(ulong *)(lVar5 + 0x18) & 0xffffffff) - 1;
        pfVar9 = (float *)(lVar5 + 0x24);
        do {
          fVar4 = *pfVar9;
          if (param_5 <= *pfVar9) {
            fVar4 = param_5;
          }
          param_5 = fVar4;
          lVar8 = lVar8 + -1;
          pfVar9 = pfVar9 + 1;
        } while (lVar8 != 0);
      }
      _fStack_58 = CONCAT44(uStack_54,param_5);
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      System_Collections_Generic_List_Vector3____ctor_3af944c(uVar6,*(undefined8 *)puVar2);
      uStack_60 = uVar6;
      thunk_FUN_02134474(&uStack_60,uVar6);
      fVar4 = fStack_58;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_View_WorldView___RoundedRectRing_g__Arc_52_0_240aeb8
                (param_3 - fVar4,param_4 - fVar4,0,&uStack_68);
      Dino_BusSand_View_WorldView___RoundedRectRing_g__Arc_52_0_240aeb8
                (fStack_58 + param_1,param_4 - fStack_58,0x42b40000,&uStack_68);
      Dino_BusSand_View_WorldView___RoundedRectRing_g__Arc_52_0_240aeb8
                (fStack_58 + param_1,fStack_58 + param_2,0x43340000,&uStack_68);
      Dino_BusSand_View_WorldView___RoundedRectRing_g__Arc_52_0_240aeb8
                (param_3 - fStack_58,fStack_58 + param_2,0x43870000,&uStack_68);
      return uStack_60;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

