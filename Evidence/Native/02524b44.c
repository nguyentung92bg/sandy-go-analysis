/* IL2CPP: Dino.BusSand.Core.StageEngine$$DuneProgress
float Dino_BusSand_Core_StageEngine__DuneProgress (Dino_BusSand_Core_StageEngine_o* __this, int32_t objectIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$DuneProgress
   float Dino_BusSand_Core_StageEngine__DuneProgress (Dino_BusSand_Core_StageEngine_o* __this,
   int32_t objectIndex, const MethodInfo* method); */

undefined4 Dino_BusSand_Core_StageEngine__DuneProgress_2424b44(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9cb9d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbed28);
    FUN_02132f7c(PTR_DAT_04cbed40);
    FUN_02132f7c(PTR_DAT_04cbed48);
    FUN_02132f7c(PTR_DAT_04cbed60);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb9d = 1;
  }
  puVar4 = PTR_DAT_04cbed40;
  puVar3 = PTR_DAT_04cbed28;
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_78,*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04cbed60);
  lStack_50 = lStack_68;
  uStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  do {
    uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_60,*(undefined8 *)puVar4);
    if ((uVar5 & 1) == 0) {
      uVar8 = 0;
      goto LAB_02524c70;
    }
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  } while (*(int *)(lStack_50 + 0x10) != param_2);
  uVar8 = 0x3f800000;
  if ((*(char *)(lStack_50 + 0x50) == '\0') && (iVar1 = *(int *)(lStack_50 + 0x1c), 0 < iVar1)) {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((int)(uint)*(byte *)(lStack_50 + 0x14) < *(int *)(lVar6 + 0x18)) {
      iVar7 = *(int *)(lVar6 + (ulong)*(byte *)(lStack_50 + 0x14) * 4 + 0x20);
    }
    else {
      iVar7 = 0;
    }
    iVar2 = *(int *)(lStack_50 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = System_Math__Max_4830ff4(0,(float)(iVar2 - iVar7) / (float)iVar1,0);
    uVar8 = System_Math__Min_4831144(0x3f800000,uVar8,0);
  }
LAB_02524c70:
  if ((uVar5 & 1) == 0) {
    uVar8 = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_60,*(undefined8 *)puVar3);
  return uVar8;
}

