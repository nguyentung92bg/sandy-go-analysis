/* IL2CPP: Dino.BusSand.Core.StageEngine$$AdvanceOutro
System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__AdvanceOutro (Dino_BusSand_Core_StageEngine_o* __this, double dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.StageEngine$$AdvanceOutro
   System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__AdvanceOutro
   (Dino_BusSand_Core_StageEngine_o* __this, double dt, const MethodInfo* method); */

undefined8 Dino_BusSand_Core_StageEngine__AdvanceOutro_24251c4(double param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lVar7;
  double dVar8;
  float fVar9;
  
  if ((bRam0000000004f9cba1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbea60);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cba1 = 1;
  }
  lVar7 = *(long *)(param_2 + 0x98);
  if (lVar7 == 0) {
LAB_025252f8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(lVar7 + 0x18);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (0 < iVar1) {
    System_Array__Clear_4851dc8(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
  }
  dVar6 = _UNK_00e69ab8;
  if (*(char *)(param_2 + 0x81) != '\0') {
    dVar8 = *(double *)(param_2 + 0xd8);
    dVar3 = _UNK_00e699b0;
    if (0.0 < param_1) {
      fVar9 = *(float *)(param_2 + 0xe0);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      dVar8 = (double)System_Math__Min_48310e8(dVar8 + param_1,(double)fVar9,0);
      *(double *)(param_2 + 0xd8) = dVar8;
      dVar3 = _UNK_00e699b0;
      dVar6 = _UNK_00e69ab8;
    }
    while (dVar5 = _UNK_00e69ab8, dVar4 = _UNK_00e699b0, bVar2 = _UNK_00e699b0 <= dVar8,
          _UNK_00e699b0 = dVar3, bVar2) {
      dVar8 = dVar8 + _UNK_00e69ab8;
      _UNK_00e69ab8 = dVar6;
      *(long *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + 1;
                    /* try { // try from 025252a8 to 026252ab has its CatchHandler @ 025252c4 */
      *(double *)(param_2 + 0xd8) = dVar8;
                    /* try { // try from 025252ac to 026252c7 has its CatchHandler @ 02524fe8 */
      if (*(long *)(param_2 + 0x20) == 0) goto LAB_025252f8;
      Dino_BusSand_Core_Road__CompleteAll_2411f38(*(long *)(param_2 + 0x20),0);
      if (*(long *)(param_2 + 0x20) == 0) goto LAB_025252f8;
                    /* catch() { ... } // from try @ 025252a8 with catch @ 025252c4 */
                    /* try { // try from 025252c8 to 026252cf has its CatchHandler @ 025252d8 */
                    /* try { // try from 025252d0 to 026252db has its CatchHandler @ 02524fe8 */
      Dino_BusSand_Core_Road__Advance_2412c60
                (*(long *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x78),
                 *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x98),0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025252c8 with catch @ 025252d8
                        */
      dVar3 = _UNK_00e699b0;
      dVar6 = _UNK_00e69ab8;
      _UNK_00e69ab8 = dVar5;
      _UNK_00e699b0 = dVar4;
      dVar8 = *(double *)(param_2 + 0xd8);
    }
  }
  _UNK_00e69ab8 = dVar6;
  return *(undefined8 *)(param_2 + 0x98);
}

