/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Click
void Dino_BusSand_Cheat_AutoQa__Click (UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Click
   void Dino_BusSand_Cheat_AutoQa__Click (UnityEngine_Transform_o* t, const MethodInfo* method); */

ulong Dino_BusSand_Cheat_AutoQa__Click_2342d10(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c6a4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabca8);
    FUN_02132f7c(PTR_DAT_04cabcb0);
    FUN_02132f7c(PTR_DAT_04cabcb8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabcc0);
    bRam0000000004f9c6a4 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar4 & 1) != 0) {
    return uVar4;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar5 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
  if (*(int *)(*(long *)PTR_DAT_04cabca8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabca8);
  }
  uVar6 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cabcc0);
  UnityEngine_EventSystems_PointerEventData___ctor_46a11f8(uVar7,uVar6,0);
  puVar2 = PTR_DAT_04cabcb8;
  if (*(int *)(*(long *)PTR_DAT_04cabcb8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88e == '\0') {
    FUN_02132f7c(PTR_DAT_04cabcb8);
    cRam0000000004f9b88e = '\x01';
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar2;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
  lVar13 = *(long *)PTR_DAT_04cabcb0;
  if (*(long *)(lVar13 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cc4458);
    FUN_02132f7c(PTR_DAT_04cc4460);
    FUN_02132f7c(PTR_DAT_04cc4468);
    FUN_02132f7c(PTR_DAT_04cabcb8);
    FUN_02132f7c(PTR_DAT_04cc4470);
    FUN_02132f7c(PTR_DAT_04cc4478);
    if (*(long *)(lVar13 + 0x38) == 0) {
      FUN_0216b4cc(lVar13);
    }
  }
  puVar2 = PTR_DAT_04cc4468;
  if (*(int *)(*(long *)PTR_DAT_04cc4468 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = UnityEngine_Pool_CollectionPool_object__object___Get_32ba63c
                    (*(undefined8 *)PTR_DAT_04cc4458);
  if (*(int *)(*(long *)PTR_DAT_04cabcb8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabcb8);
  }
  UnityEngine_EventSystems_ExecuteEvents__GetEventList_object__2746ba4
            (uVar5,lVar9,**(undefined8 **)(lVar13 + 0x38));
  puVar3 = PTR_DAT_04cc4478;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(lVar9 + 0x18);
  if (iVar1 < 1) {
    uVar14 = 0;
  }
  else {
    iVar15 = 0;
    do {
      lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                         (lVar9,iVar15,*(undefined8 *)puVar3);
      lVar16 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
      lVar11 = lVar10;
      if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
        lVar11 = FUN_0216b470(lVar16);
        lVar16 = lVar11;
      }
      if (lVar10 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = thunk_FUN_0216e7a0(lVar10,lVar16);
        lVar11 = lVar12;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(lVar10,lVar16);
        }
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(lVar11,lVar12);
      }
      (**(code **)(lVar8 + 0x18))
                (*(undefined8 *)(lVar8 + 0x40),lVar12,uVar7,*(undefined8 *)(lVar8 + 0x28));
      iVar15 = iVar15 + 1;
    } while (iVar1 != iVar15);
    uVar14 = (uint)(0 < *(int *)(lVar9 + 0x18));
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Pool_CollectionPool_object__object___Release_32ba7a4
            (lVar9,*(undefined8 *)PTR_DAT_04cc4460);
  return (ulong)uVar14;
}

