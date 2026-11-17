/* IL2CPP: Dino.BusSand.Core.StageEngine$$Advance
System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__Advance (Dino_BusSand_Core_StageEngine_o* __this, double dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.StageEngine$$Advance
   System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__Advance
   (Dino_BusSand_Core_StageEngine_o* __this, double dt, const MethodInfo* method); */

undefined8 Dino_BusSand_Core_StageEngine__Advance_2424e00(double param_1,long param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  long lVar6;
  double dVar7;
  float fVar8;
  
  if ((bRam0000000004f9cba0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbea60);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cba0 = 1;
  }
  lVar6 = *(long *)(param_2 + 0x98);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(lVar6 + 0x18);
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  if (0 < iVar1) {
    System_Array__Clear_4851dc8(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
  }
  dVar7 = *(double *)(param_2 + 0xd8);
  dVar2 = _UNK_00e699b0;
  dVar3 = _UNK_00e69ab8;
  if (0.0 < param_1) {
    fVar8 = *(float *)(param_2 + 0xe0);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar7 = (double)System_Math__Min_48310e8(dVar7 + param_1,(double)fVar8,0);
    *(double *)(param_2 + 0xd8) = dVar7;
    dVar2 = _UNK_00e699b0;
    dVar3 = _UNK_00e69ab8;
  }
  while ((dVar5 = _UNK_00e69ab8, dVar4 = _UNK_00e699b0, _UNK_00e699b0 <= dVar7 &&
         (*(char *)(param_2 + 0x80) == '\0'))) {
    dVar7 = dVar7 + _UNK_00e69ab8;
    _UNK_00e699b0 = dVar2;
    _UNK_00e69ab8 = dVar3;
    *(double *)(param_2 + 0xd8) = dVar7;
    Dino_BusSand_Core_StageEngine__TickInto_2424f0c(param_2,*(undefined8 *)(param_2 + 0x98));
    dVar7 = *(double *)(param_2 + 0xd8);
    dVar2 = _UNK_00e699b0;
    dVar3 = _UNK_00e69ab8;
    _UNK_00e69ab8 = dVar5;
    _UNK_00e699b0 = dVar4;
  }
  _UNK_00e699b0 = dVar2;
  _UNK_00e69ab8 = dVar3;
  return *(undefined8 *)(param_2 + 0x98);
}

