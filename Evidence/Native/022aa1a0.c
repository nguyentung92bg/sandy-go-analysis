/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel$$get_IsGp4
bool Dino_BusSand_App_UI_GiftPackPanel__get_IsGp4 (Dino_BusSand_App_UI_GiftPackPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047d08a0) */
/* WARNING: Removing unreachable block (ram,0x047d08ac) */
/* WARNING: Removing unreachable block (ram,0x047d08c0) */
/* WARNING: Removing unreachable block (ram,0x047d08c4) */
/* WARNING: Removing unreachable block (ram,0x047d0898) */
/* WARNING: Removing unreachable block (ram,0x047d0934) */
/* WARNING: Removing unreachable block (ram,0x047d0948) */
/* WARNING: Removing unreachable block (ram,0x047d094c) */
/* WARNING: Removing unreachable block (ram,0x047d0958) */
/* WARNING: Removing unreachable block (ram,0x047d081c) */
/* WARNING: Removing unreachable block (ram,0x047d0820) */
/* WARNING: Removing unreachable block (ram,0x047d0828) */
/* WARNING: Removing unreachable block (ram,0x047d0a3c) */
/* WARNING: Removing unreachable block (ram,0x047d0830) */
/* WARNING: Removing unreachable block (ram,0x047d0844) */
/* WARNING: Removing unreachable block (ram,0x047d084c) */
/* WARNING: Removing unreachable block (ram,0x047d0858) */
/* WARNING: Removing unreachable block (ram,0x047d0968) */
/* WARNING: Removing unreachable block (ram,0x047d08e8) */
/* WARNING: Removing unreachable block (ram,0x047d08fc) */
/* WARNING: Removing unreachable block (ram,0x047d0900) */
/* WARNING: Removing unreachable block (ram,0x047d090c) */
/* WARNING: Removing unreachable block (ram,0x047d091c) */
/* WARNING: Removing unreachable block (ram,0x047d097c) */
/* WARNING: Removing unreachable block (ram,0x047d0990) */
/* WARNING: Removing unreachable block (ram,0x047d0998) */
/* WARNING: Removing unreachable block (ram,0x047d0a38) */
/* WARNING: Removing unreachable block (ram,0x047d09a4) */
/* WARNING: Removing unreachable block (ram,0x047d09b4) */
/* WARNING: Removing unreachable block (ram,0x047d0864) */
/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel$$get_IsGp4
   bool Dino_BusSand_App_UI_GiftPackPanel__get_IsGp4 (Dino_BusSand_App_UI_GiftPackPanel_o* __this,
   const MethodInfo* method); */

bool Dino_BusSand_App_UI_GiftPackPanel__get_IsGp4_21aa1a0(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000004f9ba55 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caed28);
    bRam0000000004f9ba55 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    return false;
  }
  lVar6 = *(long *)PTR_DAT_04caed28;
  if ((bRam0000000004facaeb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04d0b2e0,lVar6,4,0);
    FUN_02132f7c(PTR_DAT_04caa370);
    bRam0000000004facaeb = 1;
  }
  if (lVar6 != 0) {
    if ((lVar3 == lVar6) || (iVar2 = *(int *)(lVar6 + 0x10), iVar2 == 0)) {
      bVar1 = true;
    }
    else if (*(int *)(lVar3 + 0x10) < iVar2) {
      bVar1 = false;
    }
    else {
      iVar2 = System_SpanHelpers__SequenceCompareTo_4843998
                        (lVar3 + (long)(*(int *)(lVar3 + 0x10) - iVar2) * 2 + 0x14,iVar2,
                         lVar6 + 0x14,iVar2,0);
      bVar1 = iVar2 == 0;
    }
    return bVar1;
  }
  thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
  uVar4 = thunk_FUN_0216e89c();
  uVar5 = thunk_FUN_021985a8(PTR_DAT_04caa800);
  System_ArgumentNullException___ctor_47afb54(uVar4,uVar5,0);
  uVar5 = thunk_FUN_021985a8(PTR_DAT_04d0b350);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar4,uVar5);
}

