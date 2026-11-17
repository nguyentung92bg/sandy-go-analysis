/* IL2CPP: Dino.BusSand.View.ChainRig$$Tick
void Dino_BusSand_View_ChainRig__Tick (Dino_BusSand_View_ChainRig_o* __this, float dt, Dino_BusSand_View_Fx_o* fx, float cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.ChainRig$$Tick
   void Dino_BusSand_View_ChainRig__Tick (Dino_BusSand_View_ChainRig_o* __this, float dt,
   Dino_BusSand_View_Fx_o* fx, float cell, const MethodInfo* method); */

void Dino_BusSand_View_ChainRig__Tick_2393560
               (float param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000004f9c8d1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc128);
    FUN_02132f7c(PTR_DAT_04cbc0f0);
    FUN_02132f7c(PTR_DAT_04cbc130);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c8d1 = 1;
  }
  puVar3 = PTR_DAT_04cbc130;
  puVar2 = PTR_DAT_04cbc128;
  puVar1 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)(param_3 + 0x30);
  if (lVar6 != 0) {
    fVar14 = param_1 / _UNK_00e2065c;
    iVar10 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar10) {
                    /* try { // try from 024937e4 to 025938db has its CatchHandler @ 024937e4
                       catch() { ... } // from try @ 024937e4 with catch @ 024937e4
                       catch() { ... } // from try @ 02493974 with catch @ 024937e4
                       catch() { ... } // from try @ 024939ac with catch @ 024937e4
                       catch() { ... } // from try @ 024939e8 with catch @ 024937e4
                       catch() { ... } // from try @ 02493a0c with catch @ 024937e4 */
        return;
      }
      lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar6,iVar10,*(undefined8 *)puVar3);
      if ((lVar6 == 0) || (lVar8 = *(long *)(param_3 + 0x20), lVar8 == 0)) break;
      lVar8 = (**(code **)(lVar8 + 0x18))
                        (*(undefined8 *)(lVar8 + 0x40),*(undefined4 *)(lVar6 + 0x14),
                         *(undefined8 *)(lVar8 + 0x28));
      lVar9 = *(long *)(param_3 + 0x20);
      if (lVar9 == 0) break;
      lVar9 = (**(code **)(lVar9 + 0x18))
                        (*(undefined8 *)(lVar9 + 0x40),*(undefined4 *)(lVar6 + 0x18),
                         *(undefined8 *)(lVar9 + 0x28));
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
      if ((uVar7 & 1) == 0) {
        if (lVar8 == 0) break;
        bVar4 = *(int *)(lVar8 + 0x2c) == 5;
      }
      else {
        bVar4 = true;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
      if ((uVar7 & 1) == 0) {
        if (lVar9 == 0) break;
        bVar5 = *(int *)(lVar9 + 0x2c) == 5;
      }
      else {
        bVar5 = true;
      }
      if ((bVar4 || bVar5) || (1.0 <= *(float *)(lVar6 + 0x54))) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
        if ((uVar7 & 1) != 0) {
          if (lVar9 == 0) break;
          *(undefined2 *)(lVar9 + 0x378) = 0;
        }
        Dino_BusSand_View_ChainRig__DropParts_2392b7c(param_2,param_3,lVar6,0,param_4);
        if (*(long *)(param_3 + 0x30) == 0) break;
        iVar11 = iVar10 + -1;
        System_Collections_Generic_List_object___RemoveAt_3a833a0
                  (*(long *)(param_3 + 0x30),iVar10,*(undefined8 *)puVar2);
      }
      else {
        if (*(char *)(lVar6 + 0x34) != '\0') {
          Dino_BusSand_View_ChainRig__Tow_23937e8(param_1,param_3,lVar6,lVar8,lVar9);
        }
        if ((*(char *)(lVar6 + 0x35) != '\0') && (*(float *)(lVar6 + 0x58) < 1.0)) {
          fVar12 = fVar14 + *(float *)(lVar6 + 0x58);
          fVar13 = 1.0;
          if (fVar12 <= 1.0) {
            fVar13 = fVar12;
          }
          *(float *)(lVar6 + 0x58) = fVar13;
        }
        Dino_BusSand_View_ChainRig__DrawHitch_2393f44(param_3,lVar6,lVar8,lVar9);
        iVar11 = iVar10;
      }
      lVar6 = *(long *)(param_3 + 0x30);
      iVar10 = iVar11 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

