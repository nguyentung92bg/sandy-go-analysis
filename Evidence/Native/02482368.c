/* IL2CPP: Dino.BusSand.GameAudio$$Make
UnityEngine_AudioClip_o* Dino_BusSand_GameAudio__Make (System_String_o* name, System_Single_array* d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$Make
   UnityEngine_AudioClip_o* Dino_BusSand_GameAudio__Make (System_String_o* name,
   System_Single_array* d, const MethodInfo* method); */

long Dino_BusSand_GameAudio__Make_2382368(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c872 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cbbc10);
    FUN_02132f7c(PTR_DAT_04cbbc18);
    bRam0000000004f9c872 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  plVar5 = (long *)FUN_02132f94(lVar4);
  puVar3 = PTR_DAT_04cbbc18;
  if (*plVar5 == 0) {
    if ((param_2 != 0) &&
       (lVar4 = UnityEngine_AudioClip__Create_4347ab8
                          (param_1,*(undefined4 *)(param_2 + 0x18),1,0xac44,0,0), lVar4 != 0)) {
      UnityEngine_AudioClip__SetData_4347760(lVar4,param_2,0,0);
      return lVar4;
    }
  }
  else {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    plVar5 = (long *)FUN_02132f94(lVar4);
    lVar4 = *plVar5;
    uStack_40 = 0;
    uStack_38 = 0;
    System_ValueTuple_object__object____ctor_30ee190
              (&uStack_40,param_1,param_2,*(undefined8 *)puVar3);
    if (lVar4 != 0) {
      lVar7 = *(long *)(lVar4 + 0x10);
      lVar8 = *(long *)PTR_DAT_04cbbc10;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          puVar6 = (undefined8 *)(lVar7 + 0x20);
          *puVar6 = uStack_40;
          *(undefined8 *)(lVar7 + 0x28) = uStack_38;
          thunk_FUN_02134474(puVar6,0);
        }
        else {
          System_Collections_Generic_List_ValueTuple_object__object____AddWithResize_39bc1a4
                    (lVar4,uStack_40,uStack_38,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

