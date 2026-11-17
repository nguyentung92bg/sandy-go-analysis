/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$StoreBlob<object>
void Dino_BusSand_App_Meta_LiveOps__StoreBlob_object_ (System_String_o* key, Il2CppObject* data, const MethodInfo_27EF594* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$StoreBlob<object>
   void Dino_BusSand_App_Meta_LiveOps__StoreBlob_object_ (System_String_o* key, Il2CppObject* data,
   const MethodInfo_27EF594* method); */

void Dino_BusSand_App_Meta_LiveOps__StoreBlob_object__27ef594(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9d81f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc4908);
    FUN_02132f7c(PTR_DAT_04cc4910);
    FUN_02132f7c(PTR_DAT_04cc4918);
    FUN_02132f7c(PTR_DAT_04cc4930);
    FUN_02132f7c(PTR_DAT_04cc4920);
    FUN_02132f7c(PTR_DAT_04cb4790);
    FUN_02132f7c(PTR_DAT_04cb4798);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cc4938);
    bRam0000000004f9d81f = 1;
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x130) == 0) {
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
      System_Collections_Generic_List_object____ctor_3a8138c(uVar5,*(undefined8 *)PTR_DAT_04cb4790);
      *(undefined8 *)(lVar4 + 0x130) = uVar5;
      thunk_FUN_02134474(lVar4 + 0x130,uVar5);
    }
    uVar5 = UnityEngine_JsonUtility__ToJson_44323ac(param_2,0);
    puVar3 = PTR_DAT_04cc4910;
    if (*(long *)(lVar4 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,*(long *)(lVar4 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
    lStack_50 = lStack_68;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    do {
      uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_60,*(undefined8 *)puVar3);
      lVar10 = lStack_50;
      if ((uVar6 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
        lVar10 = *(long *)(lVar4 + 0x130);
        lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
        Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar4,0);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x10) = param_1;
          thunk_FUN_02134474((undefined8 *)(lVar4 + 0x10),param_1);
          *(undefined8 *)(lVar4 + 0x18) = uVar5;
          thunk_FUN_02134474((undefined8 *)(lVar4 + 0x18),uVar5);
          if (lVar10 != 0) {
            lVar8 = *(long *)(lVar10 + 0x10);
            lVar9 = *(long *)PTR_DAT_04cc4930;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *plVar7 = lVar4;
                thunk_FUN_02134474(plVar7,lVar4);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar10,lVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
              return;
            }
          }
        }
        goto LAB_028ef87c;
      }
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar6 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),param_1,0);
    } while ((uVar6 & 1) == 0);
    *(undefined8 *)(lVar10 + 0x18) = uVar5;
    thunk_FUN_02134474((undefined8 *)(lVar10 + 0x18),uVar5);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
  }
  return;
}

