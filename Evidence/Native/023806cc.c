/* IL2CPP: Dino.BusSand.App.UI.KitBake$$Record
void Dino_BusSand_App_UI_KitBake__Record (UnityEngine_Transform_o* parent, UnityEngine_Transform_o* node, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitBake$$Record
   void Dino_BusSand_App_UI_KitBake__Record (UnityEngine_Transform_o* parent,
   UnityEngine_Transform_o* node, System_String_o* name, const MethodInfo* method); */

void Dino_BusSand_App_UI_KitBake__Record_22806cc
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  puVar2 = PTR_DAT_04cb4ce0;
  if ((bRam0000000004f9c13f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad650);
    FUN_02132f7c(PTR_DAT_04cb4cf8);
    FUN_02132f7c(PTR_DAT_04cad658);
    FUN_02132f7c(PTR_DAT_04cad660);
    FUN_02132f7c(PTR_DAT_04cb4d00);
    FUN_02132f7c(PTR_DAT_04cb4d08);
    FUN_02132f7c(PTR_DAT_04cad678);
    FUN_02132f7c(PTR_DAT_04cb4ce0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c13f = 1;
  }
  lVar3 = *(long *)puVar2;
  lStack_38 = 0;
  iStack_64 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 1) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
      if ((uVar4 & 1) == 0) {
        lVar3 = *(long *)puVar2;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar2;
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
        if (lVar3 != 0) {
          uVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                            (lVar3,param_1,&lStack_38,*(undefined8 *)PTR_DAT_04cb4cf8);
          if ((uVar4 & 1) == 0) {
            lVar3 = *(long *)puVar2;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar3 = *(long *)puVar2;
            }
            lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
            lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad678);
            System_Collections_Generic_Dictionary_object__int____ctor_34a8b9c
                      (lVar3,*(undefined8 *)PTR_DAT_04cad658);
            lStack_38 = lVar3;
            if (lVar5 == 0) goto LAB_0238096c;
            System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                      (lVar5,param_1,lVar3,*(undefined8 *)PTR_DAT_04cb4d08);
          }
          if ((lStack_38 != 0) &&
             (System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                        (lStack_38,param_3,&iStack_64,*(undefined8 *)PTR_DAT_04cad650),
             lStack_38 != 0)) {
            System_Collections_Generic_Dictionary_object__int___set_Item_34a9908
                      (lStack_38,param_3,iStack_64 + 1,*(undefined8 *)PTR_DAT_04cad660);
            lVar3 = *(long *)puVar2;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar3 = *(long *)puVar2;
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_80 = param_1;
            thunk_FUN_02134474(&uStack_80,param_1);
            uStack_78 = param_3;
            thunk_FUN_02134474(&uStack_78,param_3);
            uStack_70 = CONCAT44(uStack_70._4_4_,iStack_64);
            if (lVar3 != 0) {
              uStack_58 = uStack_78;
              uStack_60 = uStack_80;
              uStack_50 = uStack_70;
              System_Collections_Generic_Dictionary_object__KitBake_Made___set_Item_34f8a30
                        (lVar3,param_2,&uStack_60,*(undefined8 *)PTR_DAT_04cb4d00);
              return;
            }
          }
        }
LAB_0238096c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
  return;
}

